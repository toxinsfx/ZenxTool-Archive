#include <iostream>
#include <Windows.h>
#include <curl/curl.h>

using namespace std;

bool urlfuzzer(const string url, const string directory, const string file)
{
    string fullurl;
    if (directory.length() == 0)
    {
        fullurl = url + "/" + file;
    }
    else
    {
        fullurl = url + "/" + directory + "/" + file;
    }
    CURL* curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, fullurl.c_str());
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/42.0.2311.135 Safari/537.36 Edge/12.246");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, cleardata);
        CURLcode res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);

        long response_code;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);

        if (response_code == 404L)
        {
            return false;
        }
        if (response_code == 503L)
        {
            return false;
        }
        else
        {
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " " << fullurl << endl;
            return true;
        }
    }
}