//main.cpp
#include "stdafx.h"
#include "Adapter1.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	Adaptee* ade = new Adaptee;
	Target* adt = new Adapter1();
	adt->Request();
	getchar();
	return 0;
}