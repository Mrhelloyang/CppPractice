#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class parent
{
public:
	parent()
	{
		cout << 1 << endl;
	}
	~parent()
	{
		cout << 4 << endl;
	}
protected:
private:
};

class child :public parent
{
public:
	child()
	{
		cout << 2 << endl;
	}
	~child()
	{
		cout << 3 << endl;
	}
protected:
private:
};
void main()
{
	child obj;
	system("pause");
}