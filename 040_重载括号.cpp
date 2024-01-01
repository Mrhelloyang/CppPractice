#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class test
{
	int a, b;
public:
	int operator()(int a, int b)
	{
		return (a * a + b * b);
	}
protected:
private:
};

void main()
{

	test t1;
	cout << t1(1, 3) << endl;
	cout << "hello..." << endl;
	system("pause");
}