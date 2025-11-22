#pragma once
class Array
{
	int *arr;
	size_t arrSize;
public:
	Array() : Array(1) {}
	Array(size_t size)
		: arrSize{ size }
		, arr{ new int[arrSize] }
	{}
	~Array() { delete[] arr; }
};

