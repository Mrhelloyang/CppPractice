#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person {
public:
	int age;
	Person()
	{
		cout << "这是一个无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "这是一个有参构造函数" << endl;
	}
	Person(const Person& p)
	{
		cout << "这是一个拷贝构造函数" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "这是一个析构函数" << endl;
	}

};

int main()
{
	//1、括号法
	//Person P1;//默认构造函数调用,默认构造函数不要加()
	//Person P1();//编译器会认为是一个函数声明,Person相当于一个类型;
	//Person P2(10);//有参构造函数调用
	//Person P3(P2);
	//2、显示法
	//Person P1;
	//Person P2 = Person(10);//有参构造函数
	//Person p3 = Person(P2);//拷贝构造函数
	Person(10);//匿名对象,执行完，系统立即释放
	//不要用拷贝构造函数去初始化一个匿名对象，Person(P3)====>Person P3;系统会认为重复定义
	//3、隐式转化法
	Person P1;
	Person P4 = 10;//=Person P4(10)
	Person p5 = P1;//=Person P5(P1);
	return 0;
}