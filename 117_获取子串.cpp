#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string email = "hello28256@gmail.com";
	int pos = email.find('@');
	cout << pos << endl;
	string Substr = email.substr(0, pos);
	cout << Substr << endl;
}
int main()
{
	test01();

	return 0;
}