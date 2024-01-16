#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//抽象CPU类
class CPU {
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};
//抽象显卡类
class VideoCard {
public:
	//抽象的显示函数
	virtual void display() = 0;
};
//抽象内存条类
class Memory {
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			cout << "析构函数调用" << endl;
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete  m_mem;
			m_mem = NULL;
		}
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
private:
	CPU* m_cpu; //CPU的零件指针
	VideoCard* m_vc; //显卡零件指针
	Memory* m_mem; //内存条零件指针
};

class IntelCPU :public CPU {
public:
	//抽象的计算函数
	virtual void calculate()
	{
		cout << "IntelCPU开始计算了" << endl;
	}
};
class IntelVideoCard :public VideoCard {
public:
	//抽象的计算函数
	virtual void display()
	{
		cout << "IntelVideoCard 开始显示了" << endl;
	}
};
class IntelMemory :public Memory {
public:
	//抽象的计算函数
	virtual void storage()
	{
		cout << "IntelMemory开始存储了" << endl;
	}
};

//联想厂家
class LenovoCPU :public CPU {
public:
	//抽象的计算函数
	virtual void calculate()
	{
		cout << "LenovoCPU开始计算了" << endl;
	}
};
class LenovovideoCard :public VideoCard {
public:
	//抽象的计算函数
	virtual void display()
	{
		cout << "LenovovideoCard开始显示了" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	//抽象的计算函数
	virtual void storage()
	{
		cout << "LenovoMemory开始存储了" << endl;
	}
};
void test01()
{
	//创建第一台电脑
	CPU* cpu = new IntelCPU;
	VideoCard* videocard = new IntelVideoCard;
	Memory* memory = new IntelMemory;
	Computer* computer1 = new Computer(cpu, videocard, memory);
	computer1->work();
	delete computer1;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovovideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	//创建第三台电脑
	Computer* computer3 = new Computer(new IntelCPU, new LenovovideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main()
{
	test01();

	return 0;
}