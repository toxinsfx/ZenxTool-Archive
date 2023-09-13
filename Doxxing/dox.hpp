#include <iostream>
#include <Windows.h>
#include <curl/curl.h>

using namespace std;

bool checkwebsite(string url, string name)
{
    string fullurl = url + name;
    CURL* curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, fullurl.c_str());
        curl_easy_setopt(curl, CURLOPT_NOBODY, 1L); 
        CURLcode res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);

        long response_code;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);

        if (response_code == 404L)
        {
            return false;
        }
        else
        {
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " " + url + name << endl;
            return true;
        }
    }
    return false; 
}