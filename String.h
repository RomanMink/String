
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
	String(const String& other)
		: String(other.str_)
	{
	}
	~String() { delete[] str_; }

	size_t getLength() { return length_; }
	const char* c_str() { return str_; }
	String& setString(const char* str)
	{
		delete[] str_;
		length_ = strlen(str);
		str_ = new char[length_ + 1];
		strcpy_s(str_, length_ + 1, str);
		return *this;
	}
};