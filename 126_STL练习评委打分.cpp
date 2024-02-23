#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()

{

	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	test01();

	return 0;
}