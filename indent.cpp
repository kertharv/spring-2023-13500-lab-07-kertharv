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
#include "indent.h"
#include "unindent.h"

int countChar(std::string line, char c)
{
    int count = 0;
    for(int i = 0; i < line.length(); i++)
    {
        if (line[i] == c)
        {
            count++;
        }
    }
    return count;
}

std::string indentation(std::string filename)
{

std::ifstream badcodes(filename);
if(badcodes.fail())
{
    return "Failed to open file";  
}

std::string line, newstring;
int count = 0;


while(std::getline(badcodes, line))
{ 
    line = removeLeadingSpaces(line);
    if(line[0] == '}')
    {
        count--;
    }
    for(int i = 0; i < count; i++)
    {
        newstring += '\t';
    }

    newstring = newstring + line + '\n';
    count += countChar(line, '{');
}
badcodes.close();
return newstring;
}