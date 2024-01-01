#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set <int> s;//定义了一个整数型无序集合，要包含头文件<unordered_set>
	s.insert(19);//插入19；
	s.insert(11);
	s.insert(8);
	cout << s.size() << endl;
	s.erase(11);//删除11；
	
	if (s.count(11)==0)//没有找到返回0；
	{
		cout << "没有11" << endl;
	}

	cout << s.size() << endl;
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << ' ';
	}
	return 0;
}
