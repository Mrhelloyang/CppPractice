#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<set>
class Mycompare
{
public:
	bool operator()(int v1, int v2)const //为什么这里加const
	{
		return v1 > v2;
	}
};
void test01()
{

	set<int>S;
	S.insert(10);
	S.insert(30);
	S.insert(50);
	S.insert(60);
	S.insert(40);
	S.insert(20);
	for (set<int>::iterator it = S.begin(); it != S.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	set<int, Mycompare>S1;
	S1.insert(10);
	S1.insert(30);
	S1.insert(50);
	S1.insert(60);
	S1.insert(40);
	S1.insert(20);
	for (set<int, Mycompare>::iterator it = S1.begin(); it != S1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();

	return 0;
}