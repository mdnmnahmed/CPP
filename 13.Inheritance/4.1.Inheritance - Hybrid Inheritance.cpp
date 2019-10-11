#include<iostream>
using namespace std;

class A
{
	public:
	   int a;	  	   
};

class B:public A
{
	public:
		int b;
		
	   B(){
	   	  a=10;
	   	  cout<<"A="<<a<<endl;
	   	  
	   }
	   
	   
};
class C
{
	public:
	   int c;
	   
	   C(){
	   	  c=4;
	   }
};

class D:public B,public C
{
	public:
	   int d;
	   
	   void add(){
	   		cout<<"Sum="<<a+c;
	   }
		
	   
};

int main()
{
	cout<<"\t***Hybrid Inheritance***\n";
	D d1;
	d1.add();
}
