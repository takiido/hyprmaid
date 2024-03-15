#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

void ReadConfig();

int main() {
    ReadConfig();
    return 0;
}

void ReadConfig() {
    std::string path = "~/";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}