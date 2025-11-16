#pragma once
#include <iostream>

class String
{
	char* string;


public:
	String()
	{
		string = new char[80];
	}
	String(int size)
	{
		string = new char[size];
	}
	String(const char* str)
	{
		string = new char[sizeof(str)];
		strcpy_s(string,sizeof(str), str);
	}
	~String()
	{
		delete string;
	}


	String& setString()
	{
		std::cin >> string;
		return *this;
	}
	String& printString()
	{
		std::cout << "str:" << string << std::endl;
		return *this;
	}
};