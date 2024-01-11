#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person {
	friend ostream& operator <<(ostream& out, Person& P);
private:
	int m_A = 10;
	int m_B = 10;
};
//左移运算符<<的符号重载，不能写成成员函数，应为cout不能写在左侧
ostream& operator <<(ostream& out, Person& P)
{
	out << "P.m_A= " << P.m_A << " P.m_B= " << P.m_B << endl;
	return out;
}
int main()
{
	Person P;
	cout << P << endl;

	return 0;
}