#include<iostream>
using namespace std;

class A
{
	public:
	   int a;
	  	   
};

class B:public virtual A
{
	public:
		int b;
		
	   B(){
	   	  a=1;
	   	  cout<<"A="<<a<<endl;  
	   }
	   
	   
};
class C:public virtual A 
{
	public:
	   int c;
};

class D:public B,public C
{
	public:
	   int d;
	   
	   D(){
	   	 b=2;
	   	 cout<<"B="<<b<<endl;
	   	 c=3;
	   	 cout<<"C="<<c<<endl;
	   	 d=4;
	   	 cout<<"D="<<d<<endl;
	   }
	   
	   void total(){
	   		cout<<"Total:\t"<<a+b+c+d;
	   }
		
	   
};

int main()
{
	cout<<"\t***Hybrid Inheritance***\n";
	D d1;
	d1.total();
}
