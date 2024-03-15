//
// Created by takiido on 3/15/2024.
//

#include "config.h"

config::config() = default;

config::~config() = default;

void config::CheckConfigDir() {
    if (!fs::is_directory(confDir))
        fs::create_directory(confDir);
}

void config::CheckConfigFile() {
    std::fstream fs;
    fs.open(confFile, std::ios::out | std::ios::app);
    fs.close();
    fs.open(confFile, std::ios::in | std::ios::out | std::ios::app);
}

void config::ReadConfig() {
    CheckConfigDir();
    CheckConfigFile();

    std::cout << confFile << std::endl;
}
