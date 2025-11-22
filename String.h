#pragma once
#include <iostream>

class String
{
	char* string;
	static int strCounter;

public:
	
	String() 
	{
		string = new char[80];
		++strCounter;
	}
	String(int size)
	{
		string = new char[size];
		++strCounter;
	}
	String(const char* str)
	{
		string = new char[sizeof(str)];
		strcpy_s(string,sizeof(str), str);
		++strCounter;
	}
	~String()
	{
		delete string;
		--strCounter;
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
	static void getCounter()
	{
		std::cout << strCounter;
	}
};