#include<iostream>
using namespace std;

class Base{
	public:
		void fun1(){
			cout<<"This is Base Class\n";
		}
		void fun2(){
			cout<<"This is Base Class\n";
		}
};

class Derive:public Base{
	public:
		void fun1(){
			cout<<"This is Derive Class\n";
		}
};

int main()
{
	Base B;
	Derive D;
	
	//B.fun1();
	D.fun1();
	D.fun2();
}

