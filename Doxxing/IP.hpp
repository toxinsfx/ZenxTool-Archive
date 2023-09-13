#define CURL_STATICLIB
#include <iostream>

#include "curl/curl.h"
#include "json.hpp"

using json = nlohmann::json;

using namespace std;

size_t CallBack(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void iplookup(string ip)
{
    string response;
    CURL* curl;
    string iplookupurl = "http://ip-api.com/json/" + ip + "?fields=status,continent,continentCode,country,countryCode,region,regionName,city,district,zip,lat,lon,timezone,currency,isp,org,as,asname,reverse,mobile,proxy,hosting,query";
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, iplookupurl.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CallBack);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    json ipdata = json::parse(response);
    cout << setw(4) << ipdata << std::endl;
}