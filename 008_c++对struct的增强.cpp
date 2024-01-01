#include<iostream>
using namespace std;

struct Teacher
{
	char name[20];
	int age;
};
void main()
{
	Teacher mike;//C语言要写struct关键字，如果不想写就要typedef；
	mike.age = 19;
	cout << mike.age << endl;
}