#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
class sport
{
public:
	virtual void how()
	{
		cout << "运动" << endl;
	}
protected:
private:
};
class run :public sport
{
public:
	virtual void how()
	{
		cout << "去跑步" << endl;
	}
protected:
private:
};
class swim :public sport
{
public:
	virtual void how()
	{
		cout << "去游泳" << endl;
	}
protected:
private:
};
class football :public sport
{
public:
	virtual void how()
	{
		cout << "去踢足球" << endl;
	}
protected:
private:
};
void how(sport& how)
{
	how.how();
}
void main()
{
	sport s2;
	run r1;
	swim s1;
	football f1;
	how(s2);
	how(r1);
	how(s1);
	how(f1);
	cout << "hello..." << endl;
	system("pause");
}