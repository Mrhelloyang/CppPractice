#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"110_MyArray.hpp"
//测试内置数据类型
void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.Getsize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	MyArray<int> arr(10);
	for (int i = 0; i < 10; i++)
	{
		arr.PushBack(i);
	}
	cout << "array1打印输出：" << endl;
	printIntArray(arr);
	cout << "array1的大小：" << arr.Getsize() << endl;
	cout << "array1的容量：" << arr.Getcapacity() << endl;

	cout << "--------------------------" << endl;
}

//测试自定义数据类型
class Person {
public:
	Person() {}
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
public:
	string name;
	int age;
};

void printPersonArray(MyArray<Person>& personArr)
{
	for (int i = 0; i < personArr.Getsize(); i++) {
		cout << "姓名：" << personArr[i].name << " 年龄： " << personArr[i].age << endl;
	}
}

void test02()
{
	//创建数组
	MyArray<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	pArray.PushBack(p1);
	pArray.PushBack(p2);
	pArray.PushBack(p3);
	pArray.PushBack(p4);
	pArray.PushBack(p5);

	printPersonArray(pArray);

	cout << "pArray的大小：" << pArray.Getsize() << endl;
	cout << "pArray的容量：" << pArray.Getcapacity() << endl;

}

int main()
{
	test01();
	test02();
}
