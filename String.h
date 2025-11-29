
#pragma once
#include <cstring>
class String
{
	static size_t s_Counter;
	size_t length_;
	char* str_;
public:
	String() : String(80) {}
	String(size_t size)
		: length_{ size }
		, str_{ new char[length_ + 1] }
	{++s_Counter;}
	String(const char* str)
		: String(strlen(str))
	{
		strcpy_s(str_, length_ + 1, str);
	}
	String(const String& other)
		: String(other.str_)
	{
	}
	~String() { delete[] str_; --s_Counter;}

	size_t getLength() const { return length_; }
	static size_t getCount() { return s_Counter; }
	const char* c_str() const { return str_; }
	String& setString(const char* str);
	String& apendStr(const char* str);
	String& apendStr(String);
};