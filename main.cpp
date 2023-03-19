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
#include "unindent.h"
#include "indent.h"

int main()
{
    std::cout << "--------------------------------"<< std::endl;
    std::cout << "removeLeadingSpaces"<< std::endl;
    std::cout << "removeLeadingSpaces(\"       int x = 1;  \"): " << std::endl << 
    removeLeadingSpaces("       int x = 1;  ") << std::endl;
    std::cout << "--------------------------------"<< std::endl;
    std::cout << "Removed Indentation for bad-code.cpp" << std::endl;
    std::cout << removeSpaces("bad-code.cpp")<< std::endl;
    std::cout << "--------------------------------"<< std::endl;
    std::cout << "Properly Formatted Indentation for bad-code.cpp" << std::endl;
    std::cout << indentation("bad-code.cpp") << std::endl;
    return 0;
}