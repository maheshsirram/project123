// csrtuct.cpp : main project file.

#include "stdafx.h"

using namespace System;

struct dob{
	int d;
	int m;
	int y;
};
struct emp{
	int empid;
	char name[10];
	char bg;
	struct dob D;
};


int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
    return 0;
}
