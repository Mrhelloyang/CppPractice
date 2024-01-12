#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Parent {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class child1 :public Parent {
public:
	void func()
	{
		m_A = 10;//父类的公开权限，子类以公开权限继承，依然为公开权限；
		m_B = 10;//父类的保护权限，子类以公开权限继承，保护权限；
		//m_C = 10;//err父类的私有成员，子类公开权限继承不能访问父类的私有权限
	}
};
class child2 :protected Parent {
public:
	void func()
	{
		m_A = 10;//父类的公开权限，子类以保护权限继承，变为保护权限；
		m_B = 10; //父类的保护权限，子类以保护权限继承，依然为保护权限
		//m_C = 10;//err父类的私有成员，子类保护权限继承不能访问父类的私有权限
	}
};
class child3 :private Parent {
public:
	void func()
	{
		m_A = 10;//父类的公开权限，子类以私有权限继承，变为私有权限，类内可以访问；
		m_B = 10;//父类的保护权限，子类以私有权限继承，变为私有权限，类内可以访问；
		//m_C = 10;//err父类的私有成员，子类私有权限继承不能访问父类的私有权限
	}
	int m_D;
	//vs查看类内结构
	//打开vs开发人员命令符工具
	// C:如果不是那个盘
	//cd 文件地址
	//cl(空格)/d1(空格)reportSingleClassLayout(类名)(空格)(文件名)(回车)  注意第一个是cl不是数字1，d1是数字1；
	//如：cl /d1 reportSingleClassLayoutBase main.cpp
	//父类的私有属性也被继承了，只不过编译器隐藏访问不了

};
void test01()
{
	child1 C1;
	C1.m_A = 10;
	//C1.m_B = 10; //err保护权限只能在类内访问
	//C1.m_C = 10;//err，父类的私有权限，子类类外和类内都访问不了
}
void test02()
{
	child2 C2;
	//C2.m_A = 10;//保护权限，类外访问不了
	//C2.m_B = 10;//保护权限，类外访问不了
	//C2.m_C = 10;//err
}
void test03()
{
	child3 C3;
	//C2.m_A = 10;//私有权限，类外访问不了
	//C2.m_B = 10;//私有权限，类外访问不了
	//C2.m_C = 10;//err

}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}