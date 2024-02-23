#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void print(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	cout << "互换之前" << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
	v1.swap(v2);
	cout << "互换之后" << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;


}
void test02()
{
	//swap的收缩内存作用
	vector<int> v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;
	v3.resize(3);//这个只会截取大小，不能缩小容量，会导致内存浪费
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;
	vector<int>(v3).swap(v3);//这里定义了一个匿名对象，拷贝了v3的大小，然后把两个指针交换，匿名对象自动释放
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}