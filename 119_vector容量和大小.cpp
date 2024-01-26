#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void PrintVector(int val)
{
	cout << val << " ";
}
template<typename T>
void For_Each(vector<T> V)
{
	for_each(V.begin(), V.end(), PrintVector);
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	if (v1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器的容量为：" << v1.capacity() << endl;
		cout << "容器的大小为：" << v1.size() << endl;
	}
	//v1.resize(15);//这里有一个函数重载，写一个参数，比原来长就是在 后面补0，比原来短就是截断
	For_Each(v1);
	cout << endl;
	v1.resize(15, 100);//用第二个参数补齐
	For_Each(v1);
	cout << endl;
	v1.resize(5);
	For_Each(v1);

}
int main()
{
	test01();

	return 0;
}