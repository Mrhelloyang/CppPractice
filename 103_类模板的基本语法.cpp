#include<iostream>
//#include<string>
using namespace std;
template<class TypeName, class TypeAge = int>//类fas模板的参数列表中可以有默认参数,且要放在尾部
class Person {
public:
	Person(TypeName name, TypeAge age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	int m_Age;
	string m_Name;
};

void test01()
{
	Person<string> P1("tom", 11);
	Person<string, int> P2("tom", 11);
	//1.类模板没有自动类型推导
	//Person p2("xiyang", 18);//err
	//2.类模板在模板参数列表中可以有默认参数
	cout << P1.m_Age << " " << P1.m_Name << endl;
}
int main()
{
	test01();
	return 0;
}