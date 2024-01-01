#include"iostream"
#include"MyTeacher.h"
using namespace std;

int main()
{
	Teacher t1;
	t1.setage(26);
	strcpy_s(t1.m_name, "mike");
	cout << t1.getage() << endl;
	cout << t1.m_name << endl;
	return 0;
}
/////////////////////////////
//MyTeacher.h
#pragma once

class Teacher
{
public:
	char m_name[20];
	int m_age;
public:
	void setage(int age);
	int getage();
};
/////////////////////////////
//MyTeacher.cpp
#include"iostream"
#include"MyTeacher.h"
using namespace std;
void Teacher::setage(int age)//定义到类里面去
{
	m_age = age;
}
int Teacher::getage()
{
	return m_age;
}