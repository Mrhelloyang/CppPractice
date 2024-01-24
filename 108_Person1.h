#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T1, class T2>
class Person1 {
public:
	Person1(T1 namg, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_Age;

};