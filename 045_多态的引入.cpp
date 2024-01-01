#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class parent
{
public:
	parent(int _a)
	{
		a = _a;
	}
	void print()
	{
		printf("打印父类a=%d\n", a);
	}
protected:
private:
	int a;
};
class child :public parent
{
public:
	child(int _b) :parent(10)
	{
		b = _b;
	}
	void print()
	{
		printf("打印子类b=%d\n", b);
	}
protected:
private:
	int b;
};
void mytry1(parent* tmp)//同下
{
	tmp->print();
}
void mytry2(child* tmp)
{
	tmp->print();
}
void mytry3(parent& tmp)//类型是谁的就执行谁的打印函数；
{
	tmp.print();
}
void mytry4(child& tmp)
{
	tmp.print();
}
void main()
{
	parent p1(10);
	child c1(20);
	p1.print();
	c1.print();//这个是执行子类的打印函数
	cout << "++++++++++++++++" << endl;
	parent& base1 = p1;
	base1.print();
	child& base2 = c1;
	base2.print();//现在的c++编译器，引用也是执行自己的打印函数；
	cout << "++++++++++++++++" << endl;

	parent* base3 = NULL;
	base3 = &p1;
	base3->print();

	child* base4 = &c1;//可以用父类指针去定义子类；
	base4->print();//类型是谁的就执行谁的打印函数；
	cout << "++++++++++++++++" << endl;
	mytry1(&p1);
	mytry2(&c1);
	mytry3(p1);
	mytry4(c1);
	cout << "hello..." << endl;
	system("pause");
}