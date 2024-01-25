#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void print(int a)
{
	cout << a;
}
int main()
{
	//创建一个int类型vector容器，相当于int数组
	vector <int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<int>::iterator itbegin = v.begin();//开始迭代器，指向容器中第一个元素
	vector<int>::iterator itend = v.end();//结束迭代器，指向容器中最后一个元素的后面一个位置
	//第一种遍历方式
	while (itbegin != itend)
	{
		cout << *itbegin;
		itbegin++;
	}
	//第二种遍历方式
	for (vector<int>::iterator begin = v.begin(); begin != v.end(); begin++)
	{
		cout << *begin;
	}

	//第二种遍历方式
	for_each(v.begin(), v.end(), print);
	//本质上是把首地址和结尾后的地址传递过去，通过类模板来确定步长，然后通过函数地址入口把解引用传过去
	/* FUNCTION TEMPLATE for_each
template <class _InIt, class _Fn>
_CONSTEXPR20 _Fn for_each(_InIt _First, _InIt _Last, _Fn _Func) { // perform function for each element [_First, _Last)
	_Adl_verify_range(_First, _Last);
	auto _UFirst = _Get_unwrapped(_First);
	const auto _ULast = _Get_unwrapped(_Last);
	for (; _UFirst != _ULast; ++_UFirst) {
		_Func(*_UFirst);
	}
	return _Func;
}*/
	return 0;
}