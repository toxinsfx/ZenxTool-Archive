#define CURL_STATICLIB
#include <iostream>

#include "curl/curl.h"

using namespace std;

size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    size_t total_size = size * nmemb;
    string* response = static_cast<string*>(userp);
    response->append(static_cast<char*>(contents), total_size);
    return total_size;
}

void delete_webhook(const char webhook[])
{
    CURL* curl = curl_easy_init();
    if (curl) {
        string response;
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "DELETE");
        curl_easy_setopt(curl, CURLOPT_URL, webhook); 
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
}

void send_webhook(const char webhook[], string message)
{
    string json = R"({"content": ")" + message + R"("})";
    CURL* curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, webhook);
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json.c_str());
        struct curl_slist* headers = nullptr;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
}

bool check_webhook(const char webhook[])
{
    string response;
    CURL* curl;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, webhook);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CallBack);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    json webhookdata = json::parse(response);
    if (webhookdata["message"] == "Unknown Webhook")
    {
        return false;
    }
    if (webhookdata["url"] == webhook)
    {
        return true;
    }
}