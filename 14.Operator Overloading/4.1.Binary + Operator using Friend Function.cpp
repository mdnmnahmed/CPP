#include<iostream>
using namespace std;

class complex
{
	  int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"\n A="<<a<<"\tB="<<b;
		}
		
		friend complex operator+(complex c,complex d)
		{
			complex temp;
			temp.a=c.a+d.a;
			temp.b=c.b+d.b;
			return(temp);
		}
};		

int main()
{
	cout<<"\t***Binary + Operator using Friend Function***\n";
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	c3=c1+c2;       //c3=c1.operator+(c2);
	c3.showdata();
}
