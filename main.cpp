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
    fs::path configdir = home_dir + "/.config/hyprmaid/";
    fs::path configname = configdir.append("hyprmaid.conf");

    // Creating a directory
    if (!fs::is_directory(configdir)) {
        fs::create_directory(configdir);
    }

    std::fstream fs;
    fs.open(configname, std::ios::out | std::ios::app);
    fs.close();
    fs.open(configname, std::ios::in | std::ios::out | std::ios::app);

    std::cout << configname << std::endl;
}