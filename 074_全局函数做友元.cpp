#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class building {
	//goonggay()全局函数做building的好朋友，可以访问building中的私有成员
	friend void goodgay(building* building);//友元函数
public:

	string sittingroom;
private:
	string bedroom;
};
void goodgay(building* building)
{
	cout << "好基友正在访问客厅" << building->sittingroom << endl;
	cout << "好基友正在访问卧室" << building->bedroom << endl;//不写友元函数
}
void test()
{
	building b;
	goodgay(&b);
}
int main()
{
	test();

	return 0;
}