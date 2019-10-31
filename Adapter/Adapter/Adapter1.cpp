#include "stdafx.h"
#include "Adapter1.h"
#include <iostream>


Target::Target()
{
}
Target::~Target()
{
}
void Target::Request()
{
	std::cout << "Target::Request" << std::endl;
}
Adaptee::Adaptee()
{
}
Adaptee::~Adaptee()
{
}
void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee::SpecificRequest" << std::endl;
}
Adapter1::Adapter1()
{
}
Adapter1::~Adapter1()
{
}
void Adapter1::Request()
{
	this->SpecificRequest();
	this->testFun();
}

void Target::testFun()
{

}
