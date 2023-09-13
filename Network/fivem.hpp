#include <iostream>
#include <Windows.h>
#include <curl/curl.h>
#include <fstream>

using namespace std;

void cfxresolver(string cfxcode)
{
    CURL* curl;
    CURLcode res;
    string response;

    curl = curl_easy_init();
    if (curl) {
        string url = "https://servers-frontend.fivem.net/api/servers/single/" + cfxcode;
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        headers = curl_slist_append(headers, "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/42.0.2311.135 Safari/537.36 Edge/12.246");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            cout << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
        }
        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }
    json ipdata = json::parse(response);
    json sda = ipdata["Data"]["connectEndPoints"];
    cout << dye::green("[") << dye::white("*") << dye::green("]") << " IP" << " : " << sda[0].get<std::string>() << endl;
}

void cfxdump(string cfxcode)
{
    CURL* curl;
    CURLcode res;
    string response;

    curl = curl_easy_init();
    if (curl) {
        string url = "https://servers-frontend.fivem.net/api/servers/single/" + cfxcode;
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        headers = curl_slist_append(headers, "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/42.0.2311.135 Safari/537.36 Edge/12.246");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            cout << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
        }
        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }
    json dumpdata = json::parse(response);
    ofstream file("dump_" + cfxcode + ".txt");
    file << setw(4) << dumpdata << endl;
    cout << dye::green("[") << dye::white("*") << dye::green("]") << " File Created -> " << "dump_" + cfxcode + ".txt" << endl;
}