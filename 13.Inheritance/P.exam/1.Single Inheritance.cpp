#include<iostream>
using namespace std;

class Base{
   public:
	int a=5;
};

class Derive:public Base{
	int b=10;
  public:
  	void sum(){
  		cout<<"a+b="<<a+b;
	}
};

int main()
{
	Derive d1;
	d1.sum();
}
