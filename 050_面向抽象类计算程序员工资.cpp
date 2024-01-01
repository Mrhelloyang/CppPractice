#include<iostream>
#undef UNICODE
#undef _UNICODE

using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class programmer
{
public:
	virtual void print() = 0;
};
class junnior_programmer :public programmer
{
public:
	junnior_programmer(char* name, char* job, int sal)
	{
		this->name = name;
		this->job = job;
		this->sal = sal;
	}
	virtual void print()
	{
		cout << name << endl;
		cout << job << endl;
		cout << sal << endl;
	}
protected:
private:
	char* name;
	char* job;
	int sal;
};
class mid_programmer :public programmer
{
public:
	mid_programmer(char* name, char* job, int sal)
	{
		this->name = name;
		this->job = job;
		this->sal = sal;
	}
	virtual void print()
	{
		/*cout << name << endl;
		cout << job << endl;
		cout << sal << endl;*/
	}
protected:
private:
	char* name;
	char* job;
	int sal;
};
class adv_programmer :public programmer
{
public:
	adv_programmer(char* name, char* job, int sal)
	{
		this->name = name;
		this->job = job;
		this->sal = sal;
	}
	virtual void print()
	{
		cout << name << endl;
		cout << job << endl;
		cout << sal << endl;
	}
protected:
private:
	char* name;
	char* job;
	int sal;
};
void objplay(programmer* base)
{
	base->print();
}
int main()
{
	junnior_programmer jp((char*)"hello", (char*)"ss", 100);
	mid_programmer mp((char*)"小二", (char*)"中级程序员", 8000);
	adv_programmer ap((char*)"小三", (char*)"高级程序员", 12000);
	objplay(&jp);
	objplay(&mp);
	objplay(&ap);
	cout << "hello..." << endl;
	system("pause");
	return 0;
}
//
//在C++中，
//char* p = "abc";　　// valid in C, invalid in C++
//会跳出警告：warning: ISO C++ forbids converting a string constant to 'char*'[-Wwrite - strings]
//改成下面会通过warning
//char* p = (char*)"abc";  // OK
//或者改成下面
//char const* p = "abc";　　// OK
