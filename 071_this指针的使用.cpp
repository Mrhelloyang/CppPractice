#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//this是隐含在每一个非静态成员函数里面的一种指针
// 不用定义，直接使用，this指向被调用函数所属的对象
//1.解决名称冲突
class Person {

public:
	Person(int age)
	{
		//age = age;//err
		this->age = age;
	}
	Person& Personaddage(Person& P)
	{
		this->age += P.age;
		return *this;
		//*this作为返回值，*this就是这个对象的本体
	}
	int age;//最好养成习惯写m_Age;
};
void test()
{
	Person P1(10);
	Person P2(10);
	P2.Personaddage(P1).Personaddage(P1).Personaddage(P1);//如果不用引用返回，编译器会重新分配一个Person对象
	cout << P2.age << endl;
	cout << P2.Personaddage(P1).Personaddage(P1).Personaddage(P1).age << endl;//如果不用引用返回，编译器会重新分配一个Person对象，所以这也是40
}
int main()
{
	Person P1(19);

	test();

	return 0;
}