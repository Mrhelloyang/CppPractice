#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Animal {

public:
	virtual void Speak()
	{
		cout << "动物在说话！" << endl;
	}
};

class Cat :public Animal {
public:
	void Speak()
	{
		cout << "小猫在说话！" << endl;
	}
};

class Dog :public Animal {
public:
	void Speak()
	{
		cout << "小狗在说话！" << endl;
	}
};

void doSpeak(Animal& animal)//父类指向子类
{
	animal.Speak();
}
void test01()
{
	Animal animal;
	Cat cat;
	Dog dog;
	doSpeak(animal);
	doSpeak(cat);
	doSpeak(dog);
	//多态实现要有继承，子类重写父类的虚函数
}
int main()
{
	test01();

	return 0;
}