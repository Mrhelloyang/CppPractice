#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define cehua 0
#define meishu 1
#define yanfa 2
#include<ctime>
/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/

class Worker {

public:
	string m_name;
	int m_salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_name = "员工";
		worker.m_name += nameSeed[i];
		worker.m_salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}

}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int depId = rand() % 3;
		m.insert(make_pair(depId, *it));
	}
}

void showWorkerByGourp(multimap<int, Worker>& mWorker)
{
	multimap<int, Worker>::iterator pos = mWorker.find(cehua);
	int count = mWorker.count(cehua);
	int index = 0;
	cout << "策划部门：" << endl;
	for (; pos != mWorker.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 薪水：" << pos->second.m_salary << endl;
	}
	pos = mWorker.find(meishu);
	count = mWorker.count(meishu);
	index = 0;
	cout << "美术部门：" << endl;
	for (; pos != mWorker.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 薪水：" << pos->second.m_salary << endl;
	}
	pos = mWorker.find(yanfa);
	count = mWorker.count(yanfa);
	index = 0;
	cout << "研发部门：" << endl;
	for (; pos != mWorker.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 薪水：" << pos->second.m_salary << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker>vWorker;
	createWorker(vWorker);
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);
	showWorkerByGourp(mWorker);
	return 0;
}