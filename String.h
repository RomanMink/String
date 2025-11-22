
#pragma once
#include <cstring>
class String
{
	size_t length_;
	char* str_;
public:
	String() : String(80) {}
	String(size_t size)
		: length_{ size }
		, str_{ new char[length_ + 1] }
	{
	}
	String(const char* str)
		: String(strlen(str))
	{
		strcpy_s(str_, length_ + 1, str);
	}
	~String() { delete[] str_; }
	const char* getStr() { return str_; }
};

