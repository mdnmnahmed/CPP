#include<iostream>
using namespace std;
class test2;   //Forward Declaration
class test1
{
	int a;
	public:
	void setData(int n)
	{
	   a=n;
	}
	friend void fun(test1,test2);
};
class test2
{
	int b;
	public:
	void setData(int m)
	{
		b=m;
	}
	friend void fun(test1,test2);
};
void fun(test1 n1,test2 n2)
{
	cout<<"Sum is:::"<<n1.a+n2.b;
}

int main()
{
	test1 t1;
	test2 t2;
	t1.setData(5);
	t2.setData(10);
	fun(t1,t2);	
}
