#include<iostream>
using namespace std;

class myClass{
	int a,b;
   public:
   	myClass(int x,int y){
   		a=x;
   		b=y;
	}
	sum(){
		cout<<a+b<<endl;
	}
};


int main()
{
	myClass obj1(4,6);	//Implicit Call
	obj1.sum();
	
	myClass obj2=myClass(10,20);	//Explicit Call
	obj2.sum();
}
