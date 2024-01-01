#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#define MAX 1000
void showMenu()
{
	cout << " *************************" << endl;
	cout << " ***** 1、添加联系人 *****" << endl;
	cout << " ***** 2、显示联系人 *****" << endl;
	cout << " ***** 3、删除联系人 *****" << endl;
	cout << " ***** 4、查找联系人 *****" << endl;
	cout << " ***** 5、修改联系人 *****" << endl;
	cout << " ***** 6、清空联系人 *****" << endl;
	cout << " ***** 0、退出通讯录 *****" << endl;
	cout << " *************************" << endl;
}
struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
struct Addressbooks
{
	Person personArray[MAX];
	int m_Size;
};
//1、添加联系人
void addPerson(Addressbooks* abs)
{
	cout << "请输入联系人姓名：" << endl;
	cin >> (abs->personArray + abs->m_Size)->m_Name;
	cout << "请输入联系人性别：" << endl;
	cout << "1-男" << endl;
	cout << "2-女" << endl;
	cin >> (abs->personArray + abs->m_Size)->m_Sex;
	cout << "请输入联系人年龄：" << endl;
	cin >> (abs->personArray + abs->m_Size)->m_Age;
	cout << "请输入联系人号码：" << endl;
	cin >> (abs->personArray + abs->m_Size)->m_Phone;
	cout << "请输入联系人地址：" << endl;
	cin >> (abs->personArray + abs->m_Size)->m_Addr;
	abs->m_Size++;
}
void showAddressbooks(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录无联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << (abs->personArray + i)->m_Name << "\t";
			cout << "性别：" << ((abs->personArray + i)->m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << (abs->personArray + i)->m_Age << "\t";
			cout << "号码：" << (abs->personArray + i)->m_Phone << "\t";
			cout << "地址：" << (abs->personArray + i)->m_Addr << endl;
		}
	}
}

int isExistPerson(Addressbooks* abs, string name)//查找判断是否存在
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if ((abs->personArray + i)->m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs)//删除联系人;
{
	cout << "输入需要删除的联系人:" << endl;
	string name;
	cin >> name;
	int ret = isExistPerson(abs, name);
	if (ret == -1)
	{
		cout << "通讯录无此人" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size - 1; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
}
void findPerson(Addressbooks* abs)//查找联系人
{
	cout << "输入需要查找的联系人:" << endl;
	string name;
	cin >> name;
	int ret = isExistPerson(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << (abs->personArray + ret)->m_Name << "\t";
		cout << "性别：" << ((abs->personArray + ret)->m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << (abs->personArray + ret)->m_Age << "\t";
		cout << "号码：" << (abs->personArray + ret)->m_Phone << "\t";
		cout << "地址：" << (abs->personArray + ret)->m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

}
void modifyPerson(Addressbooks* abs)//修改联系人
{
	cout << "输入需要修改的联系人:" << endl;
	string name;
	cin >> name;
	int ret = isExistPerson(abs, name);
	if (ret != -1)
	{
		while (true)
		{
			system("cls");
			cout << " *****************************" << endl;
			cout << " ***** 1、修改联系人姓名 *****" << endl;
			cout << " ***** 2、修改联系人性别 *****" << endl;
			cout << " ***** 3、修改联系人年龄 *****" << endl;
			cout << " ***** 4、修改联系人号码 *****" << endl;
			cout << " ***** 5、修改联系人地址 *****" << endl;
			cout << " ***** 0、退出修改联系人 *****" << endl;
			cout << " *****************************" << endl;
			int select;
			cin >> select;
			switch (select)
			{
			case 1://1、修改联系人姓名
			{
				cout << "修后的姓名为" << endl;
				cin >> (abs->personArray + ret)->m_Name;
			}
			break;
			case 2://2、修改联系人性别
			{
				cout << "修后的性别为(1：男2：女)" << endl;
				cin >> (abs->personArray + ret)->m_Sex;
			}
			break;
			case 3://3、修改联系人年龄
			{
				cout << "修后的年龄为" << endl;
				cin >> (abs->personArray + ret)->m_Age;
			}
			break;
			case 4://4、修改联系人号码
			{
				cout << "修后的号码为" << endl;
				cin >> (abs->personArray + ret)->m_Phone;
			}
			break;
			case 5://5、修改联系人地址
			{
				cout << "修后的地址为" << endl;
				cin >> (abs->personArray + ret)->m_Addr;
			}
			break;
			case 0://0、退出修改
				cout << "欢迎下次修改使用" << endl;
				return;
				break;
			}
		}
	}
	else
	{
		cout << "查无此人" << endl;
	}
}
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "清空已完成" << endl;
}
int main()
{
	Addressbooks abs;
	abs.m_Size = 0;
	int select;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人
			addPerson(&abs);
			break;
		case 2://2、显示联系人
			showAddressbooks(&abs);
			break;
		case 3://3、删除联系人
			deletePerson(&abs);
			break;
		case 4://4、查找联系人
			findPerson(&abs);
			break;
		case 5://5、修改联系人
			modifyPerson(&abs);
			break;
		case 6://6、清空联系人
			cleanPerson(&abs);
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}