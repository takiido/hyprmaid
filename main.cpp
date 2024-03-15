#include <iostream>
#include <filesystem>
#include <fstream>
//namespace fs = std::filesystem;

void ReadConfig();

int main() {
    ReadConfig();
    return 0;
}

void ReadConfig() {
    std::string filename = getenv("HOME");
    filename += "/.config/hyprmaid/hyprmaid.conf";

    std::fstream fs;
    fs.open(filename, std::ios::out | std::ios::app);
    fs.close();
    fs.open(filename, std::ios::in | std::ios::out | std::ios::app);

    std::cout << filename << std::endl;
}