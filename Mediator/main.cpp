// Mediator.cpp : �������̨Ӧ�ó������ڵ㡣
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
/* �Ƚ�C1C2״̬����Ϊold,�ı�C1״̬��
 *ConcreteColleageA����ı�״̬������Action�к�ConcreteColleageB�������ͨ�ţ����ı�ConcreteColleageB�����״̬Ϊ��new��
 *ConcreteColleageB����ı�״̬������Action�к�ConcreteColleageA�������ͨ�ţ����ı�ConcreteColleageA�����״̬Ϊ��new��
 */

