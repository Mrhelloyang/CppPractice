#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class test
{
public:
	int a;
	int b;

public:
	test(int _a, int _b)
	{
		a = _a;
		b = _b;
	}
	~test()
	{
		cout << "析构函数" << endl;
	}
protected:
private:
};

int  main01()
{
	//分配基础类型
	//c
	int* p1 = (int*)malloc(sizeof(int));
	*p1 = 20;
	cout << *p1 << endl;
	free(p1);
	int* p2 = new int(30);

	cout << *p2 << endl;
	delete p2;

	cout << "hello..." << endl;
	system("pause");
	return 0;
}

int  main()
{
	//分配数组类型
	int* p1 = (int*)malloc(sizeof(int) * 10);
	p1[0] = 1;
	free(p1);
	int* p2 = new int[10];
	*p2 = 10;
	cout << *(p2 + 1) << endl;
	delete[]p2;//delete数组空间要带[];

	cout << "hello..." << endl;
	system("pause");
	return 0;
}

void main03()
{
	//分配类对象；
	//c
	test* p1 = (test*)malloc(sizeof(test));//malloc相当于分配了一块sizeof(test)大小的空间；没有进行操作
	free(p1);//只是把空间释放了；

	//c++

	test* p2 = new test(2, 3);//new会执行类的构造函数；
	delete p2;//delete会执行类的析构函数
	cout << "hello..." << endl;
	system("pause");
}
//delete和free可以互换，但是delete类的时候，会调用类的析构函数
//malloc不会调用类的构造函数，new一个类会调用类的构造函数