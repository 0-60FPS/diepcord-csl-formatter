#include <iostream>

int main()
{    
    
    const char* notify[] = {"@US Notify", "@EU Notify", "@Asia/Oceania Notify"};
    const char* gamemode[] = {"2TDM", "4TDM"};
    const char* team[] = {"Blue", "Red", "Green", "Purple"};
    const char* region[] = {"linode-fremont", "linode-dallas", "vultr-miami", "linode-london", "vultr-amsterdam", "vultr-paris", "vultr-chicago", "vultr-sydney", "vultr-tokyo", "linode-newark", "linode-singapore", "linode-frankfurt"};
    
    std::cout << "===Avocado's Diep CSL Formatter 1.0===" << '\n';
    std::cout << '\n';
    
    
    std::cout << "Select Notify: [0]:US Notify, [1]:EU Notify, [2]Asia/Oceania Notify";
    std::cout << '\n';
    int noti;
    std::cin >> noti;
    std::cout << '\n';
    
    
    std::string link;
    std::cout << "Specify Link: (copy and paste it here)";
    std::cout << '\n';
    std::cin >> link;
    std::cout << '\n';
    
    
    std::cout << "Specify Gamemode: [0]:2TDM, [1]:4TDM";
    std::cout << '\n';
    int gamemo;
    std::cin >> gamemo;
    std::cout << '\n';
    
    
    std::cout << "Specify Team: [0]:Blue, [1]:Red, [2]:Green, [3]:Purple";
    std::cout << '\n';
    int taem;
    std::cin >> taem;
    std::cout << '\n';
    
    
    std::cout << "Specify Location: [0]:linode-fremont [1]:linode-dallas [2]:vultr-miami [3]:linode-london [4]:vultr-amsterdam [5]:vultr-paris [6]:vultr-chicago [7]:vultr-sydney [8]:vultr-tokyo [9]:linode-newark [10]:linode-singapore [11]:linode-frankfurt";
    std::cout << '\n';
    int loc;
    std::cin >> loc;
    std::cout << '\n';
    
    
    std::string status;
    std::cout << "Specify Status (type out)";
    std::cout << '\n';
    std::cin >> status;
    std::cout << '\n';
    
    
    std::string id;
    std::cout << "Specify ID (4 digits)";
    std::cout << '\n';
    std::cin >> id;
    std::cout << '\n';
    
    
    std::cout << "/-----Just paste this in to chat after selecting 'Upload a File'------/" << '\n' << '\n';
    
    
    std::cout << notify[noti] << '\n';
    
    std::cout << "**Link:** <";
    std::cout << link << ">";
    std::cout << '\n';
    
    std::cout << "**Gamemode:** ";
    std::cout << gamemode[gamemo] << '\n';
    
    std::cout << "**Team:** ";
    std::cout << team[taem] << '\n';
    
    std::cout << "**Location:** ";
    std::cout << region[loc] << '\n';
    
    std::cout << "**Status:** ";
    std::cout << status << '\n';
    
    std::cout << "**ID:** ";
    std::cout << id << '\n';
    
    std::cout << "**Scoreboard:** " << '\n';
    std::cout << '\n';
  
        
}
