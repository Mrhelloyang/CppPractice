#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<map>
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << it->first << " value=" << (*it).second << endl;
	}
}
int main()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	printMap(m);
	map<int, int>m1(m);
	printMap(m1);
	map<int, int>m2;
	m2 = m1;
	printMap(m2);
	return 0;
}