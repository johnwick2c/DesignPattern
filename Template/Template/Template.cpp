﻿#include "Template.h"
#include <iostream>
using namespace std;
AbstractClass::AbstractClass()
= default;

AbstractClass::~AbstractClass()
= default;

void AbstractClass::TemplateMethod()
{
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
}

ConcreteClass1::ConcreteClass1()
= default;

ConcreteClass1::~ConcreteClass1()
= default;

void ConcreteClass1::PrimitiveOperation1()
{
	cout << "ConcreteClass1...PrimitiveOperation1"<<endl;
}
void ConcreteClass1::PrimitiveOperation2()
{
	cout << "ConcreteClass1...PrimitiveOperation2"<<endl;
}
ConcreteClass2::ConcreteClass2()
= default;

ConcreteClass2::~ConcreteClass2()
= default;

void ConcreteClass2::PrimitiveOperation1()
{
	cout << "ConcreteClass2...PrimitiveOperation1"<<endl;
}
void ConcreteClass2::PrimitiveOperation2()
{
	cout << "ConcreteClass2...PrimitiveOperation2"<<endl;
}