#include<iostream>
using namespace std;

class A{
	
	  //*vptr
	public:
		void f1(){            //Early Binding
			cout<<"\nThis is Class A Function f1()";
		}
		virtual void f2(){    //Late Binding
			cout<<"\nThis is Class A Function f2()";
		}
		virtual void f3(){    //Late Binding
			cout<<"\nThis is Class A Function f3()";
		}
		virtual void f4(){    //Late Binding
			cout<<"\nThis is Class A Function f4()";
		}
};

class B: public A{
	public:
		void f1(){          //Early Binding
			cout<<"\nThis is Class B Function f1()";
		}
		void f2(){         //Early Binding
			cout<<"\nThis is Class B Function f2()";
		}
		void f4(int x){         //Early Binding
			cout<<"\nThis is Class B Function f4()";
		}
};

int main()
{
	A *p;
	B objB;
	p=&objB;
			   //Classes
	p->f1();     //A
	p->f2(); 	 //B
	p->f3();     //A
	p->f4();	 //A
	//p->f4(5);	 //A
	
	
}
