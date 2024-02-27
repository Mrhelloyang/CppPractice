#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;
void printlist(const list<int>& L)//遍历容器
{
	for (list<int>::const_iterator lit = L.begin(); lit != L.end(); lit++)
	{
		cout << *lit << " ";
	}
	cout << endl;
}
bool MyCompare(int v1, int v2)
{
	return v1 > v2;
}
void test01()
{
	list<int>L;
	L.push_back(30);
	L.push_back(10);
	L.push_back(40);
	L.push_back(70);
	L.push_back(90);
	L.reverse();//反转
	printlist(L);
	L.sort();//排序，从小到到升序
	printlist(L);
	L.sort(MyCompare);//降序，这里要写一个回调函数
	printlist(L);

}
int main()
{

	test01();
	return 0;
}