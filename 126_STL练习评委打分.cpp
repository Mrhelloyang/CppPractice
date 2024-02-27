#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
class Person//选手类
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};
void printPerson(const vector<Person>& v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名 " << (*it).m_name << " 得分 " << (*it).m_score << endl;
	}
}
void createPerson(vector<Person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}
//评委打分
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int sum = 0;
		/*cout << it->m_name << "得分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << (*dit) << " ";
		}
		cout << endl;*/
		for (int i = 0; i < d.size(); i++)
		{
			sum += d[i];
		}
		int avg = sum / d.size();
		it->m_score = avg;
	}
}
int main()
{
	//创建5个选手
	vector<Person> v;
	createPerson(v);
	//printPerson(v);
	setScore(v);
	printPerson(v);
	return 0;
}