#include"iostream"
//using namespace std;
using namespace std;
namespace namespaceA
{
	int a = 10;
}

namespace namespaceB
{
	int a = 20;
	namespace namespaceC
	{


		struct Teacher
		{
			char name[20];
			int age;
		};
	}
}
int main()
{
	using namespace namespaceA;
	using namespace namespaceB;
	//std::cout << namespaceA::a << std::endl;
	cout << namespaceA::a << endl;
	cout << namespaceB::a << endl;
	namespaceB::namespaceC::Teacher mike;
	strcpy_s(mike.name, "hello");
	cout << mike.name << endl;
	mike.age = 18;
	cout << mike.age << endl;
	using  namespaceB::namespaceC::Teacher;
	Teacher t1;
	t1.age = 10;
	cout << t1.age << endl;
	namespaceB::namespaceC::Teacher t2;
	t2.age = 33;
	cout << t2.age << endl;
	namespaceB::a = 19;//把命名空间namespaceB里面的a改为19；
	cout << namespaceB::a << endl;
	return 0;
}