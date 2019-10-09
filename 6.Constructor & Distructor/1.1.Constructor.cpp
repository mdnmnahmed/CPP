#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()     //Default Constructor
		{
			cout<<"This Is Default Constructor"<<endl;
		}
		complex(int x)     //Single Value Parameterized Constructor
		{
			a=x;
			cout<<"This Is Single Value Parameterized Constructor Value of A="<<a<<endl;
		}
		complex(int x,int y)     //Multi Value Parameterized Constructor
		{
			a=x;
			b=y;
			cout<<"This Is Multi Value Parameterized Constructor:::"<<endl;
			cout<<" Value of A="<<a<<endl;
			cout<<" Value of B="<<b<<endl;
		}
		complex (complex &c)     //Copy Constructor
		{
			a=c.a;
			b=c.b;
			cout<<"Copy Constructor="<<endl;
			cout<<" Value of A="<<a<<endl;
			cout<<" Value of B="<<b<<endl;
		}
};
int main()
{
	complex c1;          //Default Constructor
	complex c2(5);       //Single Parameterized Constructor
	complex c3(10,20);   //Multi Parameterized Constructor
	complex c4(c3);      //Copy Constructor
}
