#include <iostream>
#include <Windows.h>
#include <curl/curl.h>
#include <mutex>
#include <fcntl.h>

using namespace std;

mutex portscanningmutex;

bool dnslookup(const string url)
{
    string response;
    CURL* curl;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CallBack);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    json dnsdata = json::parse(response);
    if (dnsdata["status"] == "INVALID_HOST")
    {
        return false;
    }
    else
    {
        ofstream file("dump_dns.txt");
        file << setw(4) << dnsdata << endl;
        cout << dye::green("[") << dye::white("*") << dye::green("]") << " File Created -> " << "dump_dns.txt" << endl;
        return true;
    }
}

bool whoislookup(const string url)
{
    string response;
    CURL* curl;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CallBack);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    json whoisdata = json::parse(response);
    if (whoisdata["status"] == "INVALID_HOST")
    {
        return false;
    }
    else
    {
        ofstream file("dump_whois.txt");
        file << setw(4) << whoisdata << endl;
        cout << dye::green("[") << dye::white("*") << dye::green("]") << " File Created -> " << "dump_whois.txt" << endl;
        return true;
    }
}

bool portscan(const string ip, int port, string printport)
{
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        return false;
    }

    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == INVALID_SOCKET) {
        return false;
    }

    sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = inet_addr(ip.c_str());

    if (connect(sockfd, (struct sockaddr*)&addr, sizeof(addr)) == 0) {
        if (printport.length() == 0)
        {
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " PORT " << dye::green(port) << endl;
            return true;
        }
        else
        {
            cout << dye::green("[") << dye::white("*") << dye::green("] ") << printport << " " << dye::green(port) << endl;
            return true;
        }
    }
    else
    {
        if (printport.length() == 0)
        {
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " PORT " << dye::red(port) << endl;
            return false;
        }
        else
        {
            cout << dye::green("[") << dye::white("*") << dye::green("] ") << printport << " " << dye::red(port) << endl;
            return false;
        }
    }
    closesocket(sockfd);
    WSACleanup();
}

void getrandomip()
{
    srand(time(NULL));
    int first = rand() % 255;
    int second = rand() % 255;
    int third = rand() % 255;
    int fourth = rand() % 255;
    cout << dye::green("[") << dye::white("*") << dye::green("]") << " " << first << "." << second << "." << third << "." << fourth << endl;
}

bool webtoip(const string url)
{
    CURL* curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, cleardata);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            return false;
        }
        else {
            char* ip;
            res = curl_easy_getinfo(curl, CURLINFO_PRIMARY_IP, &ip);
            if (res == CURLE_OK) {
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " " << dye::green(ip) << endl;
                return true;
            }
            else {
                return false;
            }
        }
        curl_easy_cleanup(curl);
    }
}