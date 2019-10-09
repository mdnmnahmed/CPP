#include<iostream>
using namespace std;
class Clss1{
	int a;
  public:
  	void fun1(){
  		cout<<"This is Fun1 From Clss1"<<endl;
	  }
	 virtual ~Clss1() { }
};
class Clss2: public Clss1{
	int b;
  public:
  	void fun2(){
  		cout<<"This is Fun2 From Clss2"<<endl;
	  }
	~Clss2() { }
};

int main()
{
	Clss2 *p=new Clss2;
	p->fun1();
	p->fun2();
	
	delete p;
	

	
}
