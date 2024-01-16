#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
class Person {
public:
	char m_Name[40];
	int m_Age;
};
void test01()
{
	Person P{ "张三",18 };
	ofstream ofs;
	ofs.open("Person.txt", ios::out | ios::binary);
	ofs.write((const char*)&P, sizeof(P));
	ofs.close();
}
int main()
{
	test01();

	return 0;
}