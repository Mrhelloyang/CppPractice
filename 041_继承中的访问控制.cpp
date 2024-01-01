#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class parent
{
public:
	int a=1;
protected:
	int b=1;
private:
	int c=1;
};

class child1:public parent
{
public:
	void test()
	{
		a=10;
	}
protected:
	
	void test()
	{
		b = 1;
	}
private:
	void test()
	{
		//c = 1;//不可继承；放在那里无所谓
	}
};
void main01()
{
	child1 c1;
	c1.a = 10;//公共，在哪都可以用
	//c1.b = 10;//err保护，只能在继承内部使用
	//c1.c;//err私有，在哪都不能用；
}


class child2 :private parent
{
public:
	void test()
	{
		a = 10;
	}
protected:

	void test()
	{
		b = 1;
	}
private:
	void test()
	{
		//c = 1;//不可继承；放在那里无所谓
	}
};
void main02()
{
	child2 c1;
	//c1.a = 10;//变成了私有属性，外部不能使用
	//c1.b = 10;//err，变成了私有属性，外部不能使用
	//c1.c;//err私有，在哪都不能用；
}


class child3 :protected parent
{
public:
	void test()
	{
		a = 10;
	}
protected:

	void test()
	{
		b = 1;
	}
private:
	void test()
	{
		//c = 1;//不可继承；放在那里无所谓
	}
};
void main()
{
	child2 c1;
	//c1.a = 10;//err，只能在继承内部使用
	//c1.b = 10;//err，只能在继承内部使用
	//c1.c;//err私有，在哪都不能用；
}
