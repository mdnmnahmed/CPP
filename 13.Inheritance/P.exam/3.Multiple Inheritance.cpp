#include<iostream>
using namespace std;

class Base1{
   public:
	int a=5;
};

class Base2{
   public:
	int b=10;
};

class Derive:public Base1,public Base2{
       int c=15;
	public:
    	void sum()
    	{
    		cout<<"a+b+c="<<a+b+c;
		}
};

int main()
{
	Derive d1;
	d1.sum();
}
