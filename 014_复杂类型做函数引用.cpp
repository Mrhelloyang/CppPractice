#include"iostream"
using namespace std;
struct Teacher
{
	char name[20];
	int age;
};
void printfT(Teacher& Tp)
{
	Tp.age = 20;//引用可以修改
	printf("age=%d\n", Tp.age);
	printf("name:%s\n", Tp.name);
}
void printfT1(Teacher Tp)//相当于copy了一份t1；
{
	Tp.age = 10;//可修改形参的值，不能改实参的值；
	printf("age=%d\n", Tp.age);
	printf("name:%s\n", Tp.name);
}
void printfT2(Teacher* Tp)
{
	Tp->age = 33;
	printf("age=%d\n", Tp->age);
	strcpy_s(Tp->name, "hello");
	printf("name:%s\n", Tp->name);
}
void main()
{
	Teacher t1;
	t1.age = 23;
	strcpy_s(t1.name, "mike");
	printfT(t1);
	printfT1(t1);
	printf("age=%d\n", t1.age);//实参没有被修改；
	printfT2(&t1);
}
