// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "String.h"
int main()
{
    String mystr("Hello world");
    
    std::cout << mystr.c_str() << std::endl;
    String mystr2 = mystr;
    std::cout << mystr2.c_str() << std::endl;
    mystr.setString("Roman");


    mystr2.apendStr(mystr);
    std::cout << mystr2.c_str() << std::endl;

}