#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<deque>
void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//err
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	/*deque和vector的区别为，deque可以在头部插入删除，因为deque内部有个中控器维护也就是指针数组，可以在头部再分配空间把地址传回
	vector访问元素会比deque快，vector是分配一块连续的空间，deque是用中继器去分配空间*/
	deque<int>d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	PrintDeque(d);
	deque<int>d1(d);
	PrintDeque(d1);
	deque<int>d2 = d;
	PrintDeque(d2);
	deque<int>d4(d.begin(), d.end());
	PrintDeque(d4);
	deque<int>d5(5, 10);
	PrintDeque(d5);
}
int main()
{
	test01();
	return 0;
}