#include"iostream"
//#define Myfunc(a,b) (a<b?a:b)
#define Myfunc(a,b) ((a)<(b)?(a):(b))
inline int myfunc(int a, int b)
{
	return a < b ? a : b;
}
void main()
{
	int a = 5;
	int b = 10;
	//int c = myfunc(++a, b);
	//printf("%d,%d,%d\n", a, b, c);
	int c = Myfunc(++a, b);
	printf("%d,%d,%d\n", a, b, c);

}