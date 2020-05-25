// NK Premium.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_DEPRECATE
#define CURL_STATICLIB
#include <iostream>
#include <windows.h>
#include <string>
#include "curl/curl.h"
#include <stdio.h>
#pragma comment(lib, "Shell32.lib")
#include <shellapi.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <tchar.h>
#include <urlmon.h>
#include <fstream>
#include <TlHelp32.h>




size_t write_data(void* ptr, size_t size, size_t nmemb, FILE* stream) {
    size_t written = fwrite(ptr, size, nmemb, stream);
    return written;
}

using namespace std;

void mmenu();
void amenu();
void beta();
void yes();
void no();
void dcln();
void ccln();
void wcln();
void eac();
void dx();
void hwid();
void spoof();
void autoinst();
void website();
void discord();
void invalid();
void mmenuhidden();
void notav();
void version();
void latest();
void update();
void sys();
void inject();
void mac();
string appversion = "0.5.1";
string releasev = "-- NK Premium V1.1 --\n";
string dash = "---------------------\n";



string consoletitle = "NK Premium V1.1";










int main()
{
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    version();
    system("color C");
    std::cout << "Checking for updates...";
    Sleep(2000);
    string latestv;
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://www.dropbox.com/s/gjze3emqhb4l4pi/version.txt?dl=1";
    string outfilename = "ver.txt";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        fstream vers;
        vers.open("ver.txt");
        vers >> latestv;
        vers.close();
        remove("ver.txt");
    }
    if (appversion == latestv) {
        latest();
    }
    else {
        update();
    }
}



static void mmenu() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nMain Menu : ";
    std::cout << "\n\n[1] Generic Clean";
    std::cout << "\n[2] Spoof HWID (RELEASED!)";
    std::cout << "\n[3] Spoof + Generic Clean (Function in the works)";
    std::cout << "\n[4] Join Discord";
    std::cout << "\n[5] Open Store";
    std::cout << "\n[6] Advanced options";
    std::cout << "\n[7] Check HWID";
    std::cout << "\nPlease select option --> ";
    string ans = "";
    std::cin >> ans;
    if (ans == "1") {
        dcln();
    }
    else if (ans == "2") {
        spoof();
    }
    else if (ans == "3") {
        notav();
        mmenu();
    }
    else if (ans == "4") {
        discord();
    }
    else if (ans == "5") {
        website();
    }
    else if (ans == "6") {
        amenu();
    }
    else if (ans == "7") {
        hwid();
    }
    else if (ans == "baccess" or ans == "Baccess" or ans == "BACCESS") {
        mmenuhidden();
    }
    else {
        invalid();
        mmenu();
    }

}

static void mmenuhidden() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nMain Menu : ";
    std::cout << "\n\n[1] Generic Clean";
    std::cout << "\n[2] Spoof HWID (Currently Unavailable)";
    std::cout << "\n[3] Spoof + Generic Clean";
    std::cout << "\n[4] Join Discord";
    std::cout << "\n[5] Open Store";
    std::cout << "\n[6] Advanced options";
    std::cout << "\n[7] Beta options (Might be unstable)";
    std::cout << "\n[8] Check HWID";
    std::cout << "\nPlease select option --> ";
    string ans = "";
    std::cin >> ans;
    if (ans == "1") {
        dcln();
    }
    else if (ans == "2") {
        spoof();
    }
    else if (ans == "3") {
        notav();
        mmenuhidden();
    }
    else if (ans == "4") {
        discord();
    }
    else if (ans == "5") {
        website();
    }
    else if (ans == "6") {
        amenu();
    }
    else if (ans == "7") {
        beta();
    }
    else if (ans == "8") {
        hwid();
    }
    else {
        invalid();
        mmenuhidden();
    }
}

static void beta() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nBeta Menu : ";
    std::cout << "\n\n[1] Nothing";
    std::cout << "\n[2] To";
    std::cout << "\n[3] See";
    std::cout << "\n[4] Here";
    std::cout << "\n[5] :)";
    std::cout << "\n[6] Type any number 1-5 to return to main menu";
    std::cout << "\nPlease select option --> ";
    string ans = "";
    std::cin >> ans;
    if (ans == "1") {
        mmenu();
    }
    else if (ans == "2") {
        mmenu();
    }
    else if (ans == "3") {
        mmenu();
    }
    else if (ans == "4") {
        mmenu();
    }
    else if (ans == "5") {
        system("CLS");
        system("color 1");
        std::cout << dash;
        std::cout << releasev;
        std::cout << dash;
        system("color C");
        std::cout << "Made by NotKrystian#7626";
        std::cout << "\nSpoofer is now Released!\n";
        std::cout << "\nReturning to Menu...";
        Sleep(2000);
        mmenu();
    }
    else {
        invalid();
        beta();
    }
}

static void amenu() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nAdvanced Menu : ";
    std::cout << "\n\n[1] Custom Clean";
    std::cout << "\n[2] Windows Clean";
    std::cout << "\n[3] Full Clean + Auto Install";
    std::cout << "\n[4] Return to main menu";
    std::cout << "\nPlease select option --> ";
    string ans = "";
    std::cin >> ans;
    if (ans == "1") {
        ccln();
    }
    else if (ans == "2") {
        wcln();
    }
    else if (ans == "3") {
        autoinst();
    }
    else if (ans == "4") {
        system("CLS");
        system("color 1");
        std::cout << dash;
        std::cout << releasev;
        std::cout << dash;
        system("color C");
        std::cout << "Made by NotKrystian#7626";
        std::cout << "\nSpoofer is now Released!\n";
        std::cout << "\nReturning to Menu...";
        Sleep(2000);
        mmenu();
    }
    else {
        invalid();
        amenu();
    }
}

static void hwid() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nChecking HWID.\n";
    std::cout << "Disk Serials : \n";
    system("wmic diskdrive get serialnumber");
    std::cout << "Cpu Serial : \n";
    //std::cout << "Error (Serial not found) \n";
    system("wmic cpu get ProcessorID");
    std::cout << "Bios Serial : \n";
    std::cout << "Error (Serial not found) \n";
    //system("wmic bios get serialnumber");
    std::cout << "Baseboard Serial : \n";
    std::cout << "Error (Serial not found) \n";
    //system("wmic baseboard get serialnumber");
    std::cout << "Mac Address : \n";
    system("getmac");
    std::cout << "\n\n(y) To Return to Main menu";
    std::cout << "\n(anything else) Close Program";
    string why;
    std::cin >> why;
    if (why == "y" or why == "Y") {
        mmenu();
    }
    else {
        exit(1);
    }
}

static void dcln() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nStarting clean.";
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/710936858976190554/deepTraces.bat";
    string outfilename = "1.bat";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("1.bat");
        remove("1.bat");
        std::cout << "\n\nClean Successful! \nReturning to menu...";
        Sleep(2000);
    }
    else {
        std::cout << "Error in running cleaner. \nReturning to menu...";
        Sleep(2000);
        mmenu();
    }
}

static void ccln() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nStarting clean.";
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/710936849396269147/customTraces.bat";
    string outfilename = "1.bat";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("1.bat");
        remove("1.bat");
        std::cout << "\n\nClean Successful! \nReturning to menu...";
        Sleep(2000);
    }
    else {
        std::cout << "Error in running cleaner. \nReturning to menu...";
        Sleep(2000);
        mmenu();
    }
}

static void wcln() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nStarting clean.";
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/710936862813847642/windowsTraces.bat";
    string outfilename = "1.bat";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("1.bat");
        remove("1.bat");
        std::cout << "\n\nClean Successful! \nReturning to menu...";
        Sleep(2000);
    }
    else {
        std::cout << "Error in running cleaner. \nReturning to menu...";
        Sleep(2000);
        mmenu();
    }
}

static void eac() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nStarting Install of EAC";
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/711143734472998932/EasyAntiCheat.exe";
    string outfilename = "eac.exe";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("eac.exe");
        remove("eac.exe");
        std::cout << "\n\nInstall Successful! \nContinuing to DX Install";
        Sleep(2000);
    }
    else {
        std::cout << "Error in running cleaner. \nReturning to menu...";
        Sleep(2000);
        mmenu();
    }
}

static void dx() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nStarting Install of DX";
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/711143688767799306/dxwebsetup.exe";
    string outfilename = "dx.exe";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("dx.exe");
        remove("dx.exe");
        std::cout << "\n\nInstall Successful! \nReturning to menu...";
        Sleep(2000);
        mmenu();
    }
    else {
        std::cout << "Error in running cleaner. \nReturning to menu...";
        Sleep(2000);
        mmenu();
    }
}

static void spoof() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nStarting Install of Spoofer";
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/713422993321099334/mapper.exe";
    string outfilename = "mapper.exe";
    string outfilename2 = "spoof.sys";
    string url2 = "https://www.dropbox.com/s/vy06qpw231ocw5q/spoof.sys?dl=1";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        
    }
    sys();
    inject();
    mac();
}

static void sys() {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string outfilename = "spoof.sys";
    string url = "https://www.dropbox.com/s/vy06qpw231ocw5q/spoof.sys?dl=1";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
    }
}

static void inject() {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string outfilename = "injector.bat";
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/713429279324635306/inject.bat";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
    }
    system("injector.bat");
    remove("injector.bat");
    remove("spoof.sys");
    remove("mapper.exe");
}

static void mac() {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string outfilename = "macchange.bat";
    string url = "https://cdn.discordapp.com/attachments/710477972410204273/714510607323365456/mac_change.bat";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
    }
    system("macchange.bat");
    remove("macchange.bat");
    std::cout << "Spoof Complete! Returning to Menu...";
    Sleep(3000);
    mmenu();
}

static void website() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    string link = "https://nk-store.xyz";
    ShellExecuteA(NULL, "open", link.c_str(), NULL, NULL, SW_SHOWNORMAL);
    std::cout << "\nOpened Link. \nReturning to menu...";
    Sleep(2000);
    mmenu();
}

static void discord() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    string link = "https://discord.gg/9dReHju";
    ShellExecuteA(NULL, "open", link.c_str(), NULL, NULL, SW_SHOWNORMAL);
    std::cout << "\nOpened Link. \nReturning to menu...";
    Sleep(2000);
    mmenu();
}

static void autoinst() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nActivating Auto Mode...\n";
    dcln();
    ccln();
    wcln();
    dx();
    eac();

    Sleep(2000);
    mmenu();
}

static void invalid() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nInvalid answer, returning to menu in 3";
    Sleep(1000);
    std::cout << " 2";
    Sleep(1000);
    std::cout << " 1";
    Sleep(1000);
}

static void notav() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nSpoofer is now Released!\n";
    std::cout << "\nFeature not available yet.";

    Sleep(2000);
}

static void version() {
    SetConsoleTitle(consoletitle.c_str);
    std::cout << "\nLoader Version : 0.5.1 \n";
}

static void latest() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    std::cout << "Loader up to Date!";
    Sleep(1000);
    system("CLS");
    system("color 1");
    std::cout << dash;
    std::cout << releasev;
    std::cout << dash;
    system("color C");
    std::cout << "Made by NotKrystian#7626";
    std::cout << "\nPlease make sure your Antivirus and Windows Defender is off! \n\nRun this loader as Admin.";
    Sleep(2000);
    mmenu();
}

static void update() {
    SetConsoleTitle(consoletitle.c_str);
    system("CLS");
    system("color 1");
    system("color C");
    std::cout << "Update Found!";
    Sleep(2000);
    string update;
    CURL* curl;
    FILE* fp;
    CURLcode res;
    string url = "https://www.dropbox.com/s/ewcmi0axhas3lby/linktolatest.txt?dl=1";
    string outfilename = "update.txt";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        fstream vers;
        vers.open("update.txt");
        vers >> update;
        vers.close();
        remove("update.txt");
    }
    system("CLS");
    system("color 1");
    system("color C");
    std::cout << "Changelog : \n";
    string changes;
    string url3 = "https://www.dropbox.com/s/929lt2f3s9037yl/changelog.txt?dl=1";
    string outfilename3 = "changes.txt";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename3.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_URL, url3.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        fstream chng;
        chng.open("changes.txt");
        while (!chng.eof()) {
            chng >> changes;
            std::cout << changes;
            std::cout << "\n";
        }
        Sleep(5000);
        chng.close();
        remove("changes.txt");
    }
    string url2 = update;
    string outfilename2 = "NKLoader Updated.exe";
    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename2.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url2.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("CLS");
        system("color 1");
        system("color C");
        std::cout << "Close Program and open latest version! Enjoy :)";
        std::cout << "\nMake sure to change its name (So that it doesn't interfere with new updates)!";
        Sleep(5000);
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//Download files pre made
//CURL* curl;
//FILE* fp;
//CURLcode res;
//string url = "https://cdn.discordapp.com/attachments/710477972410204273/710837116937961472/source.zip";
//string outfilename = "1.zip";
//curl = curl_easy_init();
//if (curl) {
    //fp = fopen(outfilename.c_str(), "wb");
    //curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    //curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    //curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
    //res = curl_easy_perform(curl);
   // curl_easy_cleanup(curl);
    //fclose(fp);
//}