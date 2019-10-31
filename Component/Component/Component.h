#pragma once

class Component
{
public:
	Component();
	virtual ~Component();
public:
	virtual void Operation() = 0;
	virtual void Add(const Component&);
	virtual void Remove(const Component&);
	virtual Component* GetChild(int);
protected:
private:
};

