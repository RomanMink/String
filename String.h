#pragma once
#include <cstring>

class String
{
	char* str_;
	size_t length_;
public:
	String() : String(80) {}

	String(size_t size)
		: length_{ size }
		, str_{ new char[length_+1] }
	{}

	String(const char* str) 
		: String(strlen(str))
	{
		strcpy_s(str_,length_+1, str);
	}
	~String()
	{
		delete[] str_;
	}


	String& setStr()
	{
		std::cin >> str_;
		return *this;
	}
	const char* getStr()
	{
		return str_;
	}
};