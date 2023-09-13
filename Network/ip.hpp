#include <iostream>
#include <string>
#include <curl/curl.h>
#include <chrono>
#include <sstream>

size_t cleardata(void*, size_t size, size_t nmemb, void*)
{
    return size * nmemb;
}

bool ipcheck(const string ip, int port) {
    CURL* curl;
    CURLcode res;
    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (curl) {
        string url = "http://" + ip + ":" + std::to_string(port);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, 1000L);
        curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);

        res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);

        curl_global_cleanup();

        if (res == CURLE_OK)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

bool httpportscan(const string ip, int port, string printport, long timeout) {
    CURL* curl;
    CURLcode res;
    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (curl) {
        string url = "http://" + ip + ":" + to_string(port);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, cleardata);
        curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, timeout);
        curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);

        res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);

        curl_global_cleanup();

        if (res == CURLE_OK)
        {
            if (printport.length() == 0)
            {
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " PORT " << dye::green(port) << endl;
            }
            else
            {
                cout << dye::green("[") << dye::white("*") << dye::green("] ") << printport << " " << dye::green(port) << endl;
            }
            return true;
        }
        else
        {
            if (printport.length() == 0)
            {
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " PORT " << dye::red(port) << endl;
            }
            else
            {
                cout << dye::green("[") << dye::white("*") << dye::green("] ") << printport << " " << dye::red(port) << endl;
            }
            return false;
        }
    }
    return false;
}

bool pingip(string ip, int port)
{
    CURL* curl = curl_easy_init();
    string url = "http://" + ip + ":" + to_string(port);
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, cleardata);
    auto starttime = chrono::high_resolution_clock::now();
    CURLcode res = curl_easy_perform(curl);
    auto endtime = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = endtime - starttime;

    if (res != CURLE_OK) {
        cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::red(" Connection timed out") << endl;
        return false;
    }
    else {
        cout << "Connected to " << dye::green(ip) << ":" << " time=" << dye::green(duration.count()) << dye::green("ms") << " port=" << dye::green(port) << endl;
        return true;
    }
    curl_easy_cleanup(curl);
    return false;
}