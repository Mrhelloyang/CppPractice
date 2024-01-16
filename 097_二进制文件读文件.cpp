#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <fstream>
class Person
{
public:
	char m_Name[40];
	int m_Age;
};
void
test01()
{
	ifstream ifs("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	Person P;
	ifs.read((char*)&P, sizeof(P));
	cout << "姓名：" << P.m_Name << "年龄：" << P.m_Age << endl;

}
int main()
{
	test01();

	return 0;
}