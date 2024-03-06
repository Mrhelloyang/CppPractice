#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include <numeric>
#include <vector>
void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 1000);//1000是起始累加值

	cout << "total = " << total << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}
