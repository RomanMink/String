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
