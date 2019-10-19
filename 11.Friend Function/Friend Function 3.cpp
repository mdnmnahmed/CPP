#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;b=y;
		}
		void showData()
		{
			cout<<"\n a="<<a<<"\n b="<<b;
		}
		friend Complex operator +(Complex,Complex);
};

    Complex operator+(Complex m,Complex n)
		{
			Complex temp;
			temp.a=m.a+n.a;
			temp.b=m.b+n.b;
			return(temp);
		}

int main()
{
	Complex c1,c2,c3;
	c1.setData(5,10);
	c2.setData(10,20);
	c3=c1+c2;
	c3.showData();
}
