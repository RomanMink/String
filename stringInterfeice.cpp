#include "String.h"
size_t String::s_Counter{};

String& String::setString(const char* str)
{
	delete[] str_;
	length_ = strlen(str);
	str_ = new char[length_ + 1];
	strcpy_s(str_, length_ + 1, str);
	return *this;
}
String& String::apendStr(const char* str)
{
	length_ += strlen(str);
	strcat(str_,str);
	return *this;
}
String& String::apendStr(String string)
{
	length_ += strlen(string.str_);
	strcat(str_, string.str_);
	return *this;
}
