//
// Created by takiido on 3/15/2024.
//
#include <iostream>
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

#ifndef HYPRMAID_CONFIG_H
#define HYPRMAID_CONFIG_H


class config {
public:
    config();
    ~config();
    void ReadConfig();
private:
    std::string home_dir = getenv("HOME");
    fs::path confFile = home_dir + "/.config/hyprmaid";
    fs::path confDir = confFile.parent_path();
    void CheckConfigDir();
    void CheckConfigFile();
};


#endif //HYPRMAID_CONFIG_H
