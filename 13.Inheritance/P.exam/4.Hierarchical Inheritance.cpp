#include<iostream>
using namespace std;

class Base{
   public:
	int a=5;
};

class Derive1:public Base{
	int b=10;
   public:
    	void sum()
    	{
    		cout<<"a+b="<<a+b;
		}
};

class Derive2:public Base{
       int c=15;
	public:
    	void sum()
    	{
    		cout<<"\na+c="<<a+c;
		}
};

int main()
{
	Derive1 d1;
	d1.sum();
	
	Derive2 d2;
	d2.sum();
}
