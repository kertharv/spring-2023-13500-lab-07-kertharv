/** 
* Spring 2023 - Lab 07
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include <fstream>
#include <string>
#include "unindent.h"

std::string removeLeadingSpaces(std::string line)
{
    std::string result;
    bool firstNonSpace = false;
    for(int i = 0; i < line.length(); i++)
    {
        if(!isspace(line[i]) && !firstNonSpace){
            firstNonSpace = true;
        }

        if(firstNonSpace){
            result += line[i];
        }

    }
    return result;
}

std::string removeSpaces(std::string filename)
{

std::ifstream badcodes("bad-code.cpp");
if(badcodes.fail()){
    return "Failed to open file";
}


std::string result, line;

while(std::getline(badcodes, line))
{
    result = result + removeLeadingSpaces(line) + "\n";
}
badcodes.close();
return result;
}