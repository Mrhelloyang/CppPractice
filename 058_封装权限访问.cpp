#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class person {
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func(string name, string car, int password)
	{
		string m_name = name;
		string m_car = car;
		int m_password = password;
		cout << m_name << m_car << m_password << endl;
	}


};
int main()
{
	person p1;
	p1.m_name = "李四";
	//p1.m_car = "奔驰";//这个在类外无法访问，在类内可以访问
	//p1.m_password = 123456;//类内和类外都无法访问
	p1.func("李四", "tesila", 23252);
	return 0;
}