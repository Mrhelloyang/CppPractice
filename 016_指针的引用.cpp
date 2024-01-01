#include"iostream"
using namespace std;
struct Teacher
{
	char name[20];
	int age;
};
int  getteachert1(Teacher** p)
{
	Teacher* tmp = NULL;
	if (p == NULL)
	{
		return -1;
	}
	tmp = (Teacher*)malloc(sizeof(Teacher));
	if (tmp == NULL)
	{
		return -2;
	}
	tmp->age = 20;
	*p = tmp;
}


int  getteachert(Teacher*& p)//要和实参地址的首元素类型相同；然后引用
{
	p = (Teacher*)malloc(sizeof(Teacher));
	if (p == NULL)
	{
		return -1;
	}
	p->age = 33;

}
void main()
{
	Teacher* t1 = NULL;
	//getteachert1(&t1);
	//printf("age=%d\n", t1->age);

	getteachert(t1);
	printf("age=%d\n", t1->age);
}