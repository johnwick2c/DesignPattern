// State.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Context.h"
#include "State.h"


int main()
{
	State* st = new ConcreteStateA();
	Context* con = new Context(st);
	con->OperationChangState();
	con->OperationChangState();
	con->OperationChangState();
	if (con != NULL)
		delete con;
	if (st != NULL)
		st = NULL;
	getchar();
	return 0;
}

