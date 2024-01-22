#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<typename T>
void Myswap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
template<typename T>
void MySort(T arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		T max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		Myswap(arr[i], arr[max]);//选择排序循环第i边的时候，是找第i大的数，然后把下表存起来，最后进行交换
	}
}
template<typename T>
void printsort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	char charArr[] = "asdfghjkl";
	int len = sizeof(charArr) / sizeof(char);
	MySort(charArr, len);
	printsort(charArr, len);
}
void test02()
{
	int intArr[] = { 1,3,5,2,9,6,4,8 };
	int len = sizeof(intArr) / sizeof(int);
	MySort(intArr, len);
	printsort(intArr, len);
}
int main()
{
	test01();
	test02();

	return 0;
}