#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Animal {

public:
	Animal()
	{
		cout << "Animal的构造函数调用！" << endl;
	}
	//virtual ~Animal()//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏，虚析构函数就是用来解决通过父类指针释放子类对象
	//{
	//	cout << "Animal的析构函数调用！" << endl;
	//}
	virtual ~Animal() = 0;
};
Animal:: ~Animal()
{
	cout << "Animal的纯虚析构函数调用！" << endl;
	//包含纯虚析构函数也称为抽象类，不能实例化对象
}

class Cat :public Animal {
public:
	Cat(string Name)
	{
		m_Name = new string(Name);
		cout << "cat的构造函数" << endl;
	}
	~Cat()
	{
		cout << "cat的析构函数" << endl;
	}
	string* m_Name;
};
void test01()
{
	Animal* abs = new Cat("汤姆");
	delete abs;
}
int main()
{
	test01();

	return 0;
}