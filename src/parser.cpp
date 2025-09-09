#include <iostream>
#include <string>
#include "parser.h"

namespace StringUtils{
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
        size_t spacePos = fullName.find(' ');
        if(spacePos != std::string::npos){
            *firstName = fullName.substr(0, spacePos);
            *lastName = fullName.substr(spacePos + 1);
        }else{
            *firstName = fullName;
            *lastName = "N/A";
        }
    }
    std::string getUsername(const std::string& email){
        size_t atPos = email.find('@');
        if(atPos != std::string::npos){
            return email.substr(0, atPos);
        } else {
            return "N/A";
        }
    }
}
