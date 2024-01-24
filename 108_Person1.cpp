template<class T1, class T2>
class Person1 {
public:
	Person1(T1 namg, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_Age;

};
template<class T1, class T2>
Person1<T1, T2>::Person1(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person1<T1, T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << " 年龄" << this->m_Age << endl;
}