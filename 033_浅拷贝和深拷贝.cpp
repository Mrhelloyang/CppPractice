#include<iostream>
using namespace std;
#include"string.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)//这个可以让上面的_s取消报错；
class test
{
public:
	char* p;
	int len;
public:
	test()
	{
		p = NULL;
		len = 0;
	}
	test(const char* tmp)
	{
		int len = strlen(tmp);
		p = (char*)malloc(len + 1);
		strcpy(p, tmp);
	}
	test(const test& obj)
	{
		p = obj.p;
		len = obj.len;
	}
	~test()
	{
		if (p != NULL)
		{
			free(p);
			p = NULL;
			len = 0;
		}
	}
protected:
};
test objplay()
{
	test t1 = ("hello");
	cout << t1.p << endl;
	return t1;
}
int main01()
{

	test t2 = objplay();//err浅拷贝，没有分配空间，调用objplay后对象t1的成员变量p指向的空间释放，然后再拷贝p给t2.p
	cout << t2.p << endl;//err
	/*char p[10];
	char tmp[10] = { "hello" };
	strcpy_s(p, tmp);*/
	cout << "hello..." << endl;
	system("pause");
	return 0;
}


class test2
{
public:
	char* p;
	int len;
public:
	test2()
	{
		p = NULL;
		len = 0;
	}
	test2(const char* tmp)
	{
		int len = strlen(tmp);
		p = (char*)malloc(len + 1);
		strcpy(p, tmp);
	}
	test2(const test2& obj)
	{
		len = obj.len;
		p = (char*)malloc(len + 1);
		strcpy(p, obj.p);
	}
	~test2()
	{
		if (p != NULL)
		{
			free(p);
			p = NULL;
			len = 0;
		}
	}
protected:
};
test objplaymain()
{
	test2 t1 = ("hello");
	cout<<t1.p<<endl;
	test2 t3=("t3hello");
	//t3=t1;
	//cout<<t3.p<<endl;//err t1
	return t1;
}
int main()
{
	//objplaymain();
	test2 t2=objplaymain();
	test2 t3 = objplaymain();
	cout << t2.p << endl;
	cout << "hello..." << endl;
	system("pause");
	return 0;
}
