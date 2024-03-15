#include <iostream>
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

void ReadConfig();

int main() {
    ReadConfig();
    return 0;
}

void ReadConfig() {
    std::string home_dir = getenv("HOME");
    fs::path configDir = home_dir + "/.config/hyprmaid/";
    fs::path configFile = configDir;
    configFile.append("hyprmaid.conf");

    // Creating a directory
    if (!fs::is_directory(configDir)) {
        fs::create_directory(configDir);
    }

    std::fstream fs;
    fs.open(configFile, std::ios::out | std::ios::app);
    fs.close();
    fs.open(configFile, std::ios::in | std::ios::out | std::ios::app);

    std::cout << configFile << std::endl;
}