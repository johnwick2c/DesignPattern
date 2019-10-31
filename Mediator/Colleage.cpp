#include "Mediator.h"
#include "Colleage.h"
#include <iostream>
using namespace std;
Colleage::Colleage()
{ }
Colleage::Colleage(Mediator* mdt)
{
	this->_mdt = mdt;
}
Colleage::~Colleage()
{ }
ConcreteColleageA::ConcreteColleageA()
{ }
ConcreteColleageA::~ConcreteColleageA()
{ }
ConcreteColleageA::ConcreteColleageA(Mediator* mdt) :Colleage(mdt)
//这句的含义是先执行Colleage的构造函数，然后在执行ConcreteColleageA的构造函数，
// Colleage的参数mdt实际上使用的就是ConcreteColleageA的参数mdt，这是初始化列表的写法

{ }
string ConcreteColleageA::GetState()
{
	return _sdt;
}
void ConcreteColleageA::SetState(const string& sdt)
{
	_sdt = sdt;
}
void ConcreteColleageA::Aciton()
{
	_mdt->DoActionFromAtoB();
	cout << "State of ConcreteColleageA:" << " " << this->GetState() << endl;
}
ConcreteColleageB::ConcreteColleageB()
{ }
ConcreteColleageB::~ConcreteColleageB()
{ }
ConcreteColleageB::ConcreteColleageB(Mediator* mdt) :Colleage(mdt)
{ }
void ConcreteColleageB::Aciton()
{
	_mdt->DoActionFromBtoA();
	cout << "State of ConcreteColleageB:" << " " << this->GetState() << endl;
}
string ConcreteColleageB::GetState()
{
	return _sdt;
}
void ConcreteColleageB::SetState(const string& sdt)
{
	_sdt = sdt;
}