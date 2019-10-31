// Mediator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Mediator.h"
#include "Colleage.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	ConcreteMediator* m = new ConcreteMediator();
	ConcreteColleageA* c1 = new ConcreteColleageA(m);
	ConcreteColleageB* c2 = new ConcreteColleageB(m);
	m->IntroColleage(c1, c2);
	c1->SetState("old");
	c2->SetState("old");
	c1->Aciton();
	c2->Aciton();
	cout << endl;
	c1->SetState("new");
	c1->Aciton();
	c2->Aciton();
	cout << endl;
	c2->SetState("old");
	c2->Aciton();
	c1->Aciton();
	getchar();
	return 0;
}
/* 先将C1C2状态设置为old,改变C1状态，
 *ConcreteColleageA对象改变状态，并在Action中和ConcreteColleageB对象进行通信，并改变ConcreteColleageB对象的状态为“new”
 *ConcreteColleageB对象改变状态，并在Action中和ConcreteColleageA对象进行通信，并改变ConcreteColleageA对象的状态为“new”
 */

