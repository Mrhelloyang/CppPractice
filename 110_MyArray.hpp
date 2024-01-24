#pragma once
#include<iostream>
using namespace std;
#include<string>
template<class T>
class MyArray {
public:
	//有参构造函数
	MyArray(int capacity)
	{
		this->capacity = capacity;
		this->size = 0;
		this->Paddress = new T[this->capacity];
	}
	//拷贝构造函数，为了解决浅拷贝的问题
	MyArray(MyArray& ma)
	{
		this->capacity = ma.capacity;
		this->size = ma.size;
		this->Paddress = new T[ma.size];
		for (int i; i < ma.size; i++)
		{

			this->Paddress[i] = ma.Paddress[i];
		}
	}
	//重载=
	MyArray& operator=(MyArray& ma)
	{
		if (this->capacity != NULL)
		{
			this->capacity = 0;
			this->size = 0;
			delete[] this->Paddress;
			this->arr = NULL;
		}
		this->capacity = ma.capacity;
		this->size = ma.size;
		this->Paddress = new T[ma.size];
		for (int i; i < ma.size; i++)
		{

			this->Paddress[i] = ma.Paddress[i];
		}
		return *this;

	}
	//通过下标访问，重载[]
	T& operator[](int index)
	{
		if (index < 0 || index >= this->size)
		{
			exit(0);
		}
		return this->Paddress[index];
	}
	//尾插
	void PushBack(T val)
	{
		//判断是否满了
		if (this->capacity == this->size)
		{
			return;
		}
		this->Paddress[this->size] = val;
		this->size++;
	}
	//尾删
	void PopBack()
	{
		//判断是否是空的
		if (this->size == 0)
		{
			return;
		}
		this->size--;
	}
	int Getsize()
	{
		return this->size;
	}
	int Getcapacity()
	{
		return this->capacity;
	}
	~MyArray()
	{
		if (this->Paddress != NULL)
		{
			delete[]this->Paddress;
			this->Paddress = NULL;
			this->size = 0;
			this->capacity = 0;

		}
	}
private:
	T* Paddress; //指向数组
	int capacity; //容量
	int size;  //数组大小
};