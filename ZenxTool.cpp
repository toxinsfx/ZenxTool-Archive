#include <iostream>
#include <Windows.h>
#include <urlmon.h>
#include <thread>

#include "Console/color.hpp"
#include "Doxxing/json.hpp"
#include "Doxxing/IP.hpp"
#include "Console/base64.hpp"
#include "Discord/Webhook.hpp"
#include "Network/ip.hpp"
#include "Network/fivem.hpp"
#include "Doxxing/dox.hpp"
#include "Network/url.hpp"
#include "Network/network.hpp"

#pragma comment(lib, "Urlmon.lib")

using namespace std;

string firsthalf_banner = R"(
                                .                                                      .
                              .n                   .                 .                  n.
                        .   .dP                  dP                   9b                 9b.    .
                       4    qXb         .       dX                     Xb       .        dXp     t
                      dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
                      9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
                       9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
                        `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'
)";
string secondhalf_banner = R"(
                              ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                                              )b.  .dbo.dP'`v'`9b.odb.  .dX(
                                            ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                                           dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb
                                          dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                                          9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP
                                           `'      9XXXXXX(   )XXXXXXP      `'
                                                    XXXX X.`v'.X XXXX
                                                    XP^X'`b   d'`X^XX
                                                    X. 9  `   '  P )X
                                                    `b  `       '  d'
                                                     `             '
)";

void changetitle()
{
    const size_t length = 20;
    TCHAR chars[] = {"abcdefghi9182345jklmnopqrstuv211935960473wxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"};
    TCHAR title[length + 1]{};

    for (size_t j = 0; j != length; j++)
    {
        title[j] += chars[rand() % 82];
    }
    SetConsoleTitle(title);
}

HWND console;
RECT r;

void start()
{
    srand(time(NULL));
    console = GetConsoleWindow();
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, 977, 800, TRUE);
    ShowScrollBar(console, SB_VERT, 0);
    Sleep(1000);
    for (size_t i = 0; i != 25; i++)
    {
        changetitle();
        Sleep(50);
    }
    Sleep(2000);
}

bool startcode = true;

int main()
{
    if (startcode == true)
    {
        start();
        startcode = false;
    }
    ShowScrollBar(console, SB_VERT, 0);
    string str_option;
    int amount_messages;
    TCHAR send_message[2000];
    int port;
    int str_port;
    bool iswebsitealive;
    string str_dork;
    int int_dork;
    string str_proxy;
    int int_proxy;
    string str_portservice;
    int int_portservice;
    string doxname;
    string doxname2;
    string ping_command;
    bool can_ping = true;
    bool valid;
    string str_base64;
    int int_base64;
    string str_base64text;
    string ip;
    char* base64encrypted;
    char* base64decrypted;
    string dsadasd;
    bool portscanning;
    int doxxing_option;
    int timeout_option;
    string timeout_str_option;
    string doxxing_str_option;
    string cfxcode;
    string str_url;
    bool canrunurlfuzzer = true;
    int portscan_option;
    string portscan_str_option;
    char input_webhook[2];
    bool ig = NULL;
    bool github = NULL;
    bool yt = NULL;
    bool twitter = NULL;
    bool tiktok = NULL; 
    bool telegram = NULL;
    bool replit = NULL;
    bool imgur = NULL;
    bool linktree = NULL;
    bool chess = NULL;
    bool twitch = NULL;
    bool reddit = NULL;
    bool patreon = NULL;
    bool kick = NULL;
    bool soundcloud = NULL;
    bool steam = NULL;
    bool pinterest = NULL;
    bool doxbin = NULL;
    bool spotify = NULL;
    cout << dye::green(firsthalf_banner);
    cout << dye::green("                          `9XXXXXXXXXXXP' `9XX'") << dye::white("   ZENX") << dye::green("    `98v8P'  ") << dye::white("TOOL") << dye::green("   `XXP' `9XXXXXXXXXXXP'");
    cout << dye::green(secondhalf_banner);
    cout << endl;
    cout << endl;
    cout << dye::green((char)201) << dye::white((char)205) << "                    " << dye::white((char)205) << dye::green((char)187) << "                         " << dye::green((char)201) << dye::white((char)205) << "                  " << dye::white((char)205) << dye::green((char)187) << endl;
    cout << dye::white((char)186) << dye::green("[") << dye::white(1) << dye::green("]") << " " << "->" << dye::green(" Webhook Spammer") << dye::white((char)186) << "                         " << dye::white((char)186) << dye::green("[") << dye::white(9) << dye::green("]") << " " << "->" << dye::green(" URL Fuzzer   ") << dye::white((char)186) << endl;
    cout << dye::white((char)186) << dye::green("[") << dye::white(2) << dye::green("]") << " " << "->" << dye::green(" Webhook Deleter") << dye::white((char)186) << "                         " << dye::white((char)186) << dye::green("[") << dye::white(10) << dye::green("]") << " " << "->" << dye::green(" DNS Lookup  ") << dye::white((char)186) << endl;
    cout << dye::green((char)186) << dye::green("[") << dye::white(3) << dye::green("]") << " " << "->" << dye::green(" IP Lookup      ") << dye::green((char)186) << "                         " << dye::green((char)186) << dye::green("[") << dye::white(11) << dye::green("]") << " " << "->" << dye::green(" Whois Lookup") << dye::green((char)186) << endl;
    cout << dye::white((char)186) << dye::green("[") << dye::white(4) << dye::green("]") << " " << "->" << dye::green(" Doxxing Tool   ") << dye::white((char)186) << "                         " << dye::white((char)186) << dye::green("[") << dye::white(12) << dye::green("]") << " " << "->" << dye::green(" Proxy Scrape") << dye::white((char)186) << endl;
    cout << dye::white((char)186) << dye::green("[") << dye::white(5) << dye::green("]") << " " << "->" << dye::green(" IP Pinger      ") << dye::white((char)186) << "                         " << dye::white((char)186) << dye::green("[") << dye::white(13) << dye::green("]") << " " << "->" << dye::green(" Google Dorks") << dye::white((char)186) << endl;
    cout << dye::green((char)186) << dye::green("[") << dye::white(6) << dye::green("]") << " " << "->" << dye::green(" Port Scanner   ") << dye::green((char)186) << "                         " << dye::green((char)186) << dye::green("[") << dye::white(14) << dye::green("]") << " " << "->" << dye::green(" Random IP   ") << dye::green((char)186) << endl;
    cout << dye::white((char)186) << dye::green("[") << dye::white(7) << dye::green("]") << " " << "->" << dye::green(" Cfx.re Resolver") << dye::white((char)186) << "                         " << dye::white((char)186) << dye::green("[") << dye::white(15) << dye::green("]") << " " << "->" << dye::green(" Web to IP   ") << dye::white((char)186) << endl;
    cout << dye::white((char)186) << dye::green("[") << dye::white(8) << dye::green("]") << " " << "->" << dye::green(" Cfx.re Dump    ") << dye::white((char)186) << "                         " << dye::white((char)186) << dye::green("[") << dye::white(16) << dye::green("]") << " " << "->" << dye::green(" Base64      ") << dye::white((char)186) << endl;
    cout << dye::green((char)200) << dye::white((char)205) << "                    " << dye::white((char)205) << dye::green((char)188) << "                         " << dye::green((char)200) << dye::white((char)205) << "                  " << dye::white((char)205) << dye::green((char)188) << endl;
    cout << endl;
    cout << dye::green("[") << dye::white("@root") << dye::green("]") << " " << ": ";
    cin >> str_option;
    int option = atoi(str_option.c_str());
    switch (option)
    {
    case 1:
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Webhook" << " : ";
        cin >> input_webhook;
        try
        {
            valid = check_webhook(input_webhook);
            if (valid == false)
            {
                cout << endl;
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " Webhook Invalid" << endl;
                system("pause");
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            }
        }
        catch (const std::exception&)
        {
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " Webhook Invalid" << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Message" << " : ";
        cin >> send_message;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Amount (Default = 1)" << " : ";
        cin >> amount_messages;
        if (amount_messages == 0)
        {
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        if (amount_messages == 1)
        {
            send_webhook(input_webhook, send_message);
        }
        if (amount_messages > 1)
        {
            for (size_t i = 0; i != amount_messages;)
            {
                valid = check_webhook(input_webhook);
                if (valid == false)
                {
                    cout << endl;
                    cout << dye::green("[") << dye::white("*") << dye::green("]") << " Webhook Invalid" << endl;
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                }
                send_webhook(input_webhook, send_message);
                Sleep(100);
                i++;
            }
        }
        else
        {
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        cout << dye::green("[") << dye::white("*") << dye::green("]") << " Finished" << endl;
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 2:
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Webhook" << " : ";
        cin >> input_webhook;
        try
        {
            valid = check_webhook(input_webhook);
            if (valid == false)
            {
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " Webhook Invalid" << endl;
                system("pause");
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            }
        }
        catch (const exception&)
        {
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " Webhook Invalid" << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        delete_webhook(input_webhook);
        cout << dye::green("[") << dye::white("*") << dye::green("]") << " Webhook Deleted" << endl;
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 3:
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " IP" << " : ";
        cin >> ip;
        iplookup(ip);
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 4:
        cout << endl;
        cout << dye::green("[") << dye::white("1") << dye::green("]") << " Dox Tool" << endl;
        cout << dye::green("[") << dye::white("2") << dye::green("]") << " OSINT Websites" << endl;
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
        cin >> doxxing_str_option;
        doxxing_option = atoi(doxxing_str_option.c_str());
        switch (doxxing_option)
        {
        case 1:
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " Name Of Person" << " : ";
            cin >> doxname;
            cout << endl;
            try
            {
                ig = checkwebsite("https://www.instagram.com/", doxname);
                Sleep(100);
                if (ig == false)
                {
                    
                }
                Sleep(100);
                github = checkwebsite("https://github.com/", doxname);
                if (github == false)
                {
                    
                }
                Sleep(100);
                yt = checkwebsite("https://www.youtube.com/@", doxname);
                if (yt == false)
                {
                    
                }
                Sleep(100);
                twitter = checkwebsite("https://twitter.com/", doxname);
                if (twitter == false)
                {
                    
                }
                Sleep(100);
                tiktok = checkwebsite("https://www.tiktok.com/@", doxname);
                if (tiktok == false)
                {
                    
                }
                Sleep(100);
                replit = checkwebsite("https://replit.com/@", doxname);
                if (replit == false)
                {
                    
                }
                Sleep(100);
                linktree = checkwebsite("https://linktr.ee/", doxname);
                if (linktree == false)
                {
                    
                }
                Sleep(100);
                twitch = checkwebsite("https://www.twitch.tv/", doxname);
                if (twitch == false)
                {
                    
                }
                Sleep(100);
                kick = checkwebsite("https://kick.com/", doxname);
                if (kick == false)
                {
                    
                }
                Sleep(100);
                steam = checkwebsite("https://steamcommunity.com/id/", doxname);
                if (steam == false)
                {
                    
                }
                Sleep(100);
                pinterest = checkwebsite("https://pinterest.com/", doxname);
                if (pinterest == false)
                {
                    
                }
                Sleep(100);
                spotify = checkwebsite("https://open.spotify.com/user/", doxname);
                if (spotify == false)
                {
                    
                }
                Sleep(100);
                imgur = checkwebsite("https://imgur.com/user/", doxname);
                if (imgur == false)
                {
                    
                }
                Sleep(100);
                reddit = checkwebsite("https://www.reddit.com/user/", doxname);
                if (reddit == false)
                {

                }
                Sleep(100);
                chess = checkwebsite("https://www.chess.com/member/", doxname);
                if (chess == false)
                {

                }
                Sleep(100);
                patreon = checkwebsite("https://www.patreon.com/", doxname);
                if (patreon == false)
                {

                }
                Sleep(100);
                soundcloud = checkwebsite("https://soundcloud.com/", doxname);
                if (soundcloud == false)
                {

                }
            }
            catch (const std::exception&)
            {
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            }
            cout << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 2:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://osint.industries/" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://osintframework.com/" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://epieos.com/" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://www.shodan.io/" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://pimeyes.com/en" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://tineye.com/" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://facecheck.id/" << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " https://www.whitepages.com/" << endl;
            cout << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        default:
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
            break;
        }
    case 5:
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " IP" << " : ";
        cin >> ip;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " PORT" << " : ";
        cin >> str_option;
        port = atoi(str_option.c_str());
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Key:" << " Insert" << " ->" << " STOP";
        cout << endl;
        cout << endl;
        while (can_ping == true)
        {
            if (GetAsyncKeyState(VK_INSERT))
            {
                can_ping = false;
            }
            pingip(ip, port);
            if (GetAsyncKeyState(VK_INSERT))
            {
                can_ping = false;
            }
            Sleep(1000);
            if (GetAsyncKeyState(VK_INSERT))
            {
                can_ping = false;
            }
        }
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 6:
        cout << endl;
        cout << dye::green("[") << dye::white("1") << dye::green("]") << " Custom Port" << endl;
        cout << dye::green("[") << dye::white("2") << dye::green("]") << " Default" << endl;
        cout << dye::green("[") << dye::white("3") << dye::green("]") << " All Ports 1 - 65535" << endl;
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
        cin >> portscan_str_option;
        portscan_option = atoi(portscan_str_option.c_str());
        switch (portscan_option)
        {
        case 1:
            cout << endl;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " IP" << " : ";
            cin >> ip;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " PORT" << " : ";
            cin >> str_option;
            port = atoi(str_option.c_str());
            cout << endl;
            portscan(ip, port, "");
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 2:
            cout << endl;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " IP" << " : ";
            cin >> ip;
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " Service" << endl;
            cout << endl;
            cout << dye::green("[") << dye::white("1") << dye::green("]") << " HTTP" << endl;
            cout << dye::green("[") << dye::white("2") << dye::green("]") << " ALL" << endl;
            cout << endl;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
            cin >> str_portservice;
            int_portservice = atoi(str_portservice.c_str());
            switch (int_portservice)
            {
            case 1:
                cout << endl;
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " Timeout" << endl;
                cout << endl;
                cout << dye::green("[") << dye::white("1") << dye::green("]") << " Fast" << endl;
                cout << dye::green("[") << dye::white("2") << dye::green("]") << " Slow" << endl;
                cout << dye::green("[") << dye::white("3") << dye::green("]") << " Extremely Fast" << endl;
                cout << endl;
                cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
                cin >> timeout_str_option;
                timeout_option = atoi(timeout_str_option.c_str());
                switch (timeout_option)
                {
                case 1:
                    httpportscan(ip, 80, "HTTP", 100L);
                    Sleep(100);
                    httpportscan(ip, 443, "HTTPS", 100L);
                    Sleep(100);
                    httpportscan(ip, 21, "FTP", 100L);
                    Sleep(100);
                    httpportscan(ip, 22, "FTPS / SSH", 100L);
                    Sleep(100);
                    httpportscan(ip, 110, "POP3", 100L);
                    Sleep(100);
                    httpportscan(ip, 995, "POP3 SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 143, "IMAP", 100L);
                    Sleep(100);
                    httpportscan(ip, 993, "IMAP SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 25, "SMTP", 100L);
                    Sleep(100);
                    httpportscan(ip, 26, "SMTP", 100L);
                    Sleep(100);
                    httpportscan(ip, 587, "SMTP SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 3306, "MySQL", 100L);
                    Sleep(100);
                    httpportscan(ip, 2082, "cPanel", 100L);
                    Sleep(100);
                    httpportscan(ip, 2083, "cPanel SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 2086, "WHM", 100L);
                    Sleep(100);
                    httpportscan(ip, 2087, "WHM SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 2095, "Webmail", 100L);
                    Sleep(100);
                    httpportscan(ip, 2096, "Webmail SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 2077, "WebDAV/WebDisk", 100L);
                    Sleep(100);
                    httpportscan(ip, 2078, "WebDAV/WebDisk SSL", 100L);
                    Sleep(100);
                    httpportscan(ip, 30120, "FIVEM", 100L);
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                case 2:
                    httpportscan(ip, 80, "HTTP", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 443, "HTTPS", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 21, "FTP", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 22, "FTPS / SSH", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 110, "POP3", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 995, "POP3 SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 143, "IMAP", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 993, "IMAP SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 25, "SMTP", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 26, "SMTP", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 587, "SMTP SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 3306, "MySQL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2082, "cPanel", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2083, "cPanel SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2086, "WHM", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2087, "WHM SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2095, "Webmail", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2096, "Webmail SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2077, "WebDAV/WebDisk", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 2078, "WebDAV/WebDisk SSL", 1000L);
                    Sleep(1000);
                    httpportscan(ip, 30120, "FIVEM", 1000L);
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                case 3:
                    httpportscan(ip, 80, "HTTP", 50L);
                    Sleep(50);
                    httpportscan(ip, 443, "HTTPS", 50L);
                    Sleep(50);
                    httpportscan(ip, 21, "FTP", 50L);
                    Sleep(50);
                    httpportscan(ip, 22, "FTPS / SSH", 50L);
                    Sleep(50);
                    httpportscan(ip, 110, "POP3", 50L);
                    Sleep(50);
                    httpportscan(ip, 995, "POP3 SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 143, "IMAP", 50L);
                    Sleep(50);
                    httpportscan(ip, 993, "IMAP SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 25, "SMTP", 50L);
                    Sleep(50);
                    httpportscan(ip, 26, "SMTP", 50L);
                    Sleep(50);
                    httpportscan(ip, 587, "SMTP SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 3306, "MySQL", 50L);
                    Sleep(50);
                    httpportscan(ip, 2082, "cPanel", 50L);
                    Sleep(50);
                    httpportscan(ip, 2083, "cPanel SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 2086, "WHM", 50L);
                    Sleep(50);
                    httpportscan(ip, 2087, "WHM SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 2095, "Webmail", 50L);
                    Sleep(50);
                    httpportscan(ip, 2096, "Webmail SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 2077, "WebDAV/WebDisk", 50L);
                    Sleep(50);
                    httpportscan(ip, 2078, "WebDAV/WebDisk SSL", 50L);
                    Sleep(50);
                    httpportscan(ip, 30120, "FIVEM", 50L);
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                default:
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                }
            case 2:
                portscan(ip, 80, "HTTP");
                Sleep(100);
                portscan(ip, 443, "HTTPS");
                Sleep(100);
                portscan(ip, 21, "FTP");
                Sleep(100);
                portscan(ip, 22, "FTPS / SSH");
                portscan(ip, 110, "POP3");
                portscan(ip, 995, "POP3 SSL");
                portscan(ip, 143, "IMAP");
                portscan(ip, 993, "IMAP SSL");
                portscan(ip, 25, "SMTP");
                portscan(ip, 26, "SMTP");
                portscan(ip, 587, "SMTP SSL");
                portscan(ip, 3306, "MySQL");
                portscan(ip, 2082, "cPanel");
                portscan(ip, 2083, "cPanel SSL");
                portscan(ip, 2086, "WHM");
                portscan(ip, 2087, "WHM SSL");
                portscan(ip, 2095, "Webmail");
                portscan(ip, 2096, "Webmail SSL");
                portscan(ip, 2077, "WebDAV/WebDisk");
                portscan(ip, 2078, "WebDAV/WebDisk SSL");
                portscan(ip, 30120, "FIVEM");
                system("pause");
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            default:
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            }
        case 3:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " Service" << endl;
            cout << endl;
            cout << dye::green("[") << dye::white("1") << dye::green("]") << " HTTP" << endl;
            cout << dye::green("[") << dye::white("2") << dye::green("]") << " ALL" << endl;
            cout << endl;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
            cin >> str_portservice;
            int_portservice = atoi(str_portservice.c_str());
            switch (int_portservice)
            {
            case 1:
                cout << endl;
                cout << dye::green("[") << dye::white("+") << dye::green("]") << " IP" << " : ";
                cin >> ip;
                cout << endl;
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " Timeout" << endl;
                cout << endl;
                cout << dye::green("[") << dye::white("1") << dye::green("]") << " Fast" << endl;
                cout << dye::green("[") << dye::white("2") << dye::green("]") << " Slow" << endl;
                cout << dye::green("[") << dye::white("3") << dye::green("]") << " Extremely Fast" << endl;
                cout << endl;
                cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
                cin >> timeout_str_option;
                timeout_option = atoi(timeout_str_option.c_str());
                switch (timeout_option)
                {
                case 1:
                {
                    cout << endl;
                    cout << dye::green("[") << dye::white("+") << dye::green("]") << " Key:" << " Insert" << " ->" << " STOP";
                    cout << endl;
                    ofstream portsfile("validports.txt");
                    for (size_t i = 1; i != 65536;)
                    {
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        portscanning = httpportscan(ip, i, "", 100L);
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        Sleep(100);
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        if (portscanning == true)
                        {
                            portsfile << "VALID PORT " << i << std::endl;
                        }
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        i++;
                    }
                    portsfile.close();
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                }
                case 2:
                {
                    cout << endl;
                    cout << dye::green("[") << dye::white("+") << dye::green("]") << " Key:" << " Insert" << " ->" << " STOP";
                    cout << endl;
                    ofstream portsfile("validports.txt");
                    for (size_t i = 1; i != 65536;)
                    {
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        portscanning = httpportscan(ip, i, "", 1000L);
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        Sleep(1000);
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        if (portscanning == true)
                        {
                            portsfile << "VALID PORT " << i << std::endl;
                        }
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        i++;
                    }
                    portsfile.close();
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                }
                case 3:
                {
                    cout << endl;
                    cout << dye::green("[") << dye::white("+") << dye::green("]") << " Key:" << " Insert" << " ->" << " STOP";
                    cout << endl;
                    ofstream portsfile("validports.txt");
                    for (size_t i = 1; i != 65536;)
                    {
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        portscanning = httpportscan(ip, i, "", 50L);
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        Sleep(50);
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        if (portscanning == true)
                        {
                            portsfile << "VALID PORT " << i << std::endl;
                        }
                        if (GetAsyncKeyState(VK_INSERT))
                        {
                            break;
                        }
                        i++;
                    }
                    portsfile.close();
                    system("pause");
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                }
                default:
                    ShowScrollBar(console, SB_VERT, 0);
                    system("cls");
                    main();
                }
            case 2:
            {
                cout << endl;
                cout << dye::green("[") << dye::white("+") << dye::green("]") << " IP" << " : ";
                cin >> ip;
                cout << dye::green("[") << dye::white("+") << dye::green("]") << " Key:" << " Insert" << " ->" << " STOP";
                cout << endl;
                ofstream portsfile("validports.txt");
                for (size_t i = 1; i != 65536;)
                {
                    if (GetAsyncKeyState(VK_INSERT))
                    {
                        break;
                    }
                    portscanning = portscan(ip, i, "");
                    if (GetAsyncKeyState(VK_INSERT))
                    {
                        break;
                    }
                    if (GetAsyncKeyState(VK_INSERT))
                    {
                        break;
                    }
                    if (portscanning == true)
                    {
                        portsfile << "VALID PORT " << i << std::endl;
                    }
                    if (GetAsyncKeyState(VK_INSERT))
                    {
                        break;
                    }
                    i++;
                }
                portsfile.close();
                system("pause");
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            }
            default:
                ShowScrollBar(console, SB_VERT, 0);
                system("cls");
                main();
            }
        default:
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
    case 7:
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Cfx.re Code" << " : ";
        cin >> cfxcode;
        try
        {
            cfxresolver(cfxcode);
        }
        catch (const std::exception&)
        {
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 8:
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Cfx.re Code" << " : ";
        cin >> cfxcode;
        try
        {
            cfxdump(cfxcode);
        }
        catch (const std::exception&)
        {
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 9:
    {
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Url" << " : ";
        cin >> str_url;
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Scanning -> " << str_url << endl;
        cout << endl;
        ifstream wordsfile("words.txt");
        ifstream directoriesfile("directories.txt");
        if (wordsfile.good() == false)
        {
            URLDownloadToFileA(NULL, "https://cdn.discordapp.com/attachments/715501797414010900/1149741279727599646/words.txt", "words.txt", NULL, NULL);
        }
        if (directoriesfile.good() == false)
        {
            URLDownloadToFileA(NULL, "https://cdn.discordapp.com/attachments/715501797414010900/1149721744823812206/directories.txt", "directories.txt", NULL, NULL);
        }
        vector<string> wordslines;
        vector<string> directorieslines;
        string wordsline;
        string directoriesline;
        while (getline(wordsfile, wordsline)) {
            wordslines.push_back(wordsline);
        }
        while (getline(directoriesfile, directoriesline)) {
            directorieslines.push_back(directoriesline);
        }
        wordsfile.close();
        directoriesfile.close();
        for (const string str : directorieslines)
        {
            urlfuzzer(str_url, str, "");
            Sleep(100);
        } 
        for (const string str : directorieslines)
        {
            for (const string str2 : wordslines)
            {
                urlfuzzer(str_url, str, str2);
                Sleep(100);
            }
        }
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    }
    case 10:
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Url" << " : ";
        cin >> str_url;
        if (dnslookup("https://networkcalc.com/api/dns/lookup/" + str_url) == false)
        {
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        else
        {
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
    case 11:
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Url" << " : ";
        cin >> str_url;
        if (whoislookup("https://networkcalc.com/api/dns/whois/" + str_url) == false)
        {
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        else
        {
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
    case 12:
        cout << endl;
        cout << dye::green("[") << dye::white("1") << dye::green("]") << " HTTP" << endl;
        cout << dye::green("[") << dye::white("2") << dye::green("]") << " SOCKS4" << endl;
        cout << dye::green("[") << dye::white("3") << dye::green("]") << " SOCKS5" << endl;
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
        cin >> str_proxy;
        int_proxy = atoi(str_proxy.c_str());
        switch (int_proxy)
        {
        case 1:
        {
            ifstream wordsfile("http.txt");
            if (wordsfile.good() == false)
            {
                URLDownloadToFileA(NULL, "https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/http.txt", "http.txt", NULL, NULL);
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " File Created -> " << "http.txt" << endl;
            }
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        case 2:
        {
            ifstream wordsfile("socks4.txt");
            if (wordsfile.good() == false)
            {
                URLDownloadToFileA(NULL, "https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/socks4.txt", "socks4.txt", NULL, NULL);
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " File Created -> " << "socks4.txt" << endl;
            }
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        case 3:
        {
            ifstream wordsfile("socks5.txt");
            if (wordsfile.good() == false)
            {
                URLDownloadToFileA(NULL, "https://raw.githubusercontent.com/TheSpeedX/PROXY-List/master/socks5.txt", "socks5.txt", NULL, NULL);
                cout << dye::green("[") << dye::white("*") << dye::green("]") << " File Created -> " << "socks5.txt" << endl;
            }
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
        default:
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
    case 13:
        cout << endl;
        cout << dye::green("[") << dye::white("1") << dye::green("]") << " Camera" << endl;
        cout << dye::green("[") << dye::white("2") << dye::green("]") << " Admin" << endl;
        cout << dye::green("[") << dye::white("3") << dye::green("]") << " Desktop" << endl;
        cout << dye::green("[") << dye::white("4") << dye::green("]") << " Login" << endl;
        cout << dye::green("[") << dye::white("5") << dye::green("]") << " Database" << endl;
        cout << dye::green("[") << dye::white("6") << dye::green("]") << " Password" << endl;
        cout << dye::green("[") << dye::white("7") << dye::green("]") << " Mail" << endl;
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
        cin >> str_dork;
        int_dork = atoi(str_dork.c_str());
        switch (int_dork)
        {
        case 1:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"webcam 7 " -inurl:/admin.html)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"Toshiba Network Camera")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"Index of /webcam/")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"webcamXP 5" inurl:admin.html)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:/multi.html intitle:webcam)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"webcam" inurl:login)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"webcam 7" inurl:'/gallery.html')") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"EvoCam" inurl:"webcam.html")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"active webcam page")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:”Live View/ — AXIS”")") << endl;
            
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 2:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:.org inurl:/admin.aspx)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:co.in inurl:/admin.aspx)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:"/login.aspx" intitle:"adminlogin")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:"/admin" intitle:"adminlogin")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"Index of" inurl:/backup/ "admin.zip")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"index of /" "admin.zip" "admin/")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl: "phpmyadmin/setup/")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"index of" inurl:admin/php)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"index of" " *admin-login.php ")") << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 3:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( allinurl:tsweb/default.htm)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"Remote Desktop Web Connection" inurl:tsweb)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( "VNC Desktop" inurl:5800)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"Remote Desktop Web Connection")") << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 4:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:co.in inurl:/login.aspx)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:.org inurl:/login.aspx)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:.com inurl:/login.aspx)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:"/user" intitle:"userlogin")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:"*admin|login" site: gov)") << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 5:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"index of" "database.sql")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"database" "backup" filetype:sql)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( Intitle:database ext:sql)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"index of" "database.py")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( "index of" inurl:database ext:sql | xls | xml | json | csv)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( "Welcome to phpMyAdmin" " Create new database")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( "index of" "database.sql.zip")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( "Index of" "database.sql")") << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 6:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:com.* intitle:"index of" *.admin.password)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( site:pastebin.com "admin password")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intext:"Index of" intext:"password.zip")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:users/password/new)") << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 7:
            cout << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intitle:"webmail Login")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( intext:"Index of" "email.txt")") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( inurl:mail intitle:Webmail - Login)") << endl;
            cout << dye::green("[") << dye::white("*") << dye::green("]") << dye::green(R"( allintext:@gmail.com filetype:log)") << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        default:
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
    case 14:
        cout << endl;
        getrandomip();
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 15:
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Url" << " : ";
        cin >> str_url;
        cout << endl;
        webtoip(str_url);
        system("pause");
        ShowScrollBar(console, SB_VERT, 0);
        system("cls");
        main();
    case 16:
        cout << endl;
        cout << dye::green("[") << dye::white("1") << dye::green("]") << " Encrypt" << endl;
        cout << dye::green("[") << dye::white("2") << dye::green("]") << " Decrypt" << endl;
        cout << endl;
        cout << dye::green("[") << dye::white("+") << dye::green("]") << " Option" << " : ";
        cin >> str_base64;
        int_base64 = atoi(str_base64.c_str());
        switch (int_base64)
        {
        case 1:
            cout << endl;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " Text" << " : ";
            cin >> str_base64text;
            dsadasd = base64::to_base64(str_base64text);
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " BASE 64 " << dye::green(": ") << dsadasd << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        case 2:
            cout << endl;
            cout << dye::green("[") << dye::white("+") << dye::green("]") << " BASE 64" << " : ";
            cin >> str_base64text;
            dsadasd = base64::from_base64(str_base64text);
            cout << dye::green("[") << dye::white("*") << dye::green("]") << " Original " << dye::green(": ") << dsadasd << endl;
            system("pause");
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        default:
            ShowScrollBar(console, SB_VERT, 0);
            system("cls");
            main();
        }
    default:
        ShowScrollBar(console, SB_VERT, 0);
        system("cls"); 
        main();
        break;
    }
}
