#pragma once
class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
	void testFun();
protected:
private:
};
class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
protected:
private:
};
//public获得接口继承，private获得实现继承
class Adapter1 :public Target, private Adaptee
{
public:
	Adapter1();
	~Adapter1();
	void Request() override;
protected:
private:
};
