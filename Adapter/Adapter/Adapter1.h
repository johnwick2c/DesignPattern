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
//public��ýӿڼ̳У�private���ʵ�ּ̳�
class Adapter1 :public Target, private Adaptee
{
public:
	Adapter1();
	~Adapter1();
	void Request() override;
protected:
private:
};
