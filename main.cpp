#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

void ReadConfig();

int main() {
    ReadConfig();
    return 0;
}

void ReadConfig() {
    std::string home_dir = getenv("HOME");
    home_dir += "/";
    std::cout << home_dir << std::endl;
}