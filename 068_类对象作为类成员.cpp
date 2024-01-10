#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
class Phone {
public:
	string PName;
	Phone(string pName)
	{
		PName = pName;
		cout << "Phone构造函数" << endl;
	}
	~Phone()
	{
		cout << "Phone析构函数" << endl;
	}
};

class Person {
public:
	Person(string Name, string pName) :m_Name(Name), m_Phone(pName)//Phone m_Phone=pName==Person m_Phone(pName)隐式转换法
	{

		cout << "Person构造函数" << endl;
	}
	~Person()
	{

		cout << "Person析构函数" << endl;
	}
	string m_Name;
	Phone m_Phone;

};
//类对象做类成员，先执行类成员对象的构造函数，在执行自己的构造函数
//析构时先析构自身，再执行析构类成员对象的析构函数
int main()
{
	Person P1("张三", "苹果max");
	cout << P1.m_Name << endl;
	cout << P1.m_Phone.PName << endl;

	return 0;
}