#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
using namespace std;

void test01()
{
	stack<int> sta;
	sta.push(10);
	sta.push(20);
	sta.push(30);
	sta.push(40);
	cout << sta.size() << endl;
	while (!sta.empty())
	{
		cout << sta.top() << " ";
		sta.pop();
	}
	cout << endl;
	cout << sta.size() << endl;
}
int main()
{
	test01();

	return 0;
}