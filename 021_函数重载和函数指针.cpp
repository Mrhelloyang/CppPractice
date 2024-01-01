#include"iostream"
using namespace std;
void func(int a)
{
	printf("a=%d\n", a);
}
void func(int a, int b)
{
	printf("a=%d,b=%d\n", a, b);
}
void func(char* p)
{
	printf("%s\n", p);
}
void func(char* p1, char* p2)
{
	printf("%s,%s\n", p1, p2);
}
typedef void (*Myfuncp1)(int, int);
typedef void (*Myfuncp2)(char*, char*);

void main()
{
	Myfuncp1 p1 = NULL;
	p1 = func;
	p1(3, 5);
	Myfuncp2 p2 = NULL;
	p2 = func;
	//p2("hello", "mike");
	char buf1[] = { "hello" };
	char buf2[] = { "mike" };
	p2(buf1, buf2);
}