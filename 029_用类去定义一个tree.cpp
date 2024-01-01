#include"iostream"
using namespace std;
class tree
{
public:
	int ages;
public:
	void grow(int years)
	{
		ages = ages + years;
	}
	void age()
	{
		printf("ages=%d\n", ages);
	}
};
void main()
{
	tree t1;
	t1.ages = 10;
	t1.grow(20);
	t1.age();

}