#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person {
public:
	Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
	{

	}
	int m_A;
	int m_B;
	int m_C;

};
int main()
{

	Person P(30, 20, 10);
	cout << "m_A" << P.m_A << endl;
	cout << "m_B" << P.m_B << endl;
	cout << "m_C" << P.m_C << endl;
	return 0;
}