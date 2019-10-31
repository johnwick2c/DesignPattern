//Adapter.cpp
#include "stdafx.h"
#include "Adapter.h"
#include <iostream>
Target::Target()
= default;

Target::~Target()
= default;

void Target::Request()
{
	std::cout << "Target::Request" << std::endl;
}
Adaptee::Adaptee()
= default;

Adaptee::~Adaptee()
= default;

void Adaptee::SpecificRequest()
{
	std::cout << "Adaptee::SpecificRequest" << std::endl;
}
Adapter::Adapter(Adaptee* ade)
{
	this->_ade = ade;
}
Adapter::~Adapter()
= default;

void Adapter::Request()
{
	_ade->SpecificRequest();
}