#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Person {
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "输入有误" << endl;
			return;
		}
		m_Age = age;
	}
	string getIdol()
	{
		return m_Idol;
	}
private:
	string m_Name;
	int  m_Age;
	string m_Idol = "小王";
};
int main()
{
	Person p1;
	//设置名字可读可写
	p1.setName("小明");
	cout << "姓名：" << p1.getName() << endl;
	//设置年龄只写
	p1.setAge(19);
	//设置偶像只可读
	cout << "年龄：" << p1.getIdol() << endl;


	return 0;
}