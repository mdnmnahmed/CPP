#include<iostream>
using namespace std;

class Base{
   public:
	int a=5;
};

class Derive1:public Base{
   public:
	int b=10;
};

class Derive2:public Derive1{
       int c=15;
	public:
    	void sum()
    	{
    		cout<<"a+b+c="<<a+b+c;
		}
};

int main()
{
	Derive2 d1;
	d1.sum();
}
