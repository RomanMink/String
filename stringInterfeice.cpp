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
String& String::appendStr(const char* str)
{
	char* bufferStr = new char[length_ + 1] {' '};
	strcpy_s(bufferStr, length_ + 1, str_);
	delete[] str_;
	length_ += strlen(str);
	str_ = new char[length_ + 1];
	strcpy_s(str_, length_ + 1, bufferStr);
	strcat_s(str_, length_ + 1, str);
	delete[] bufferStr;
	return *this;
}
String& String::appendStr(String string)
{
	char* bufferStr = new char[length_ + 1] {' '};
	strcpy_s(bufferStr, length_ + 1, str_);
	delete[] str_;
	length_ += strlen(string.str_);
	str_ = new char[length_ + 1];
	strcpy_s(str_, length_ + 1, bufferStr);
	strcat_s(str_, length_+1, string.str_);
	delete[] bufferStr;
	return *this;
}
