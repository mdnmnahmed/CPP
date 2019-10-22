#include<iostream>
using namespace std;

class A{
	public:
		void f1(){            //Early Binding
			cout<<"\nThis is Class A Function f1()";
		}
		virtual void f2(){    //Late Binding
			cout<<"\nThis is Class A Function f2()";
		}
		void fn1(){
			cout<<"\nThis is Class A Function fn1()";
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
};

int main()
{
	A *p,obj1;
	B obj2;
	p=&obj2;
			   //Classes
	obj1.f1();   //A
	obj2.f1();   //B
	obj2.fn1();  //A
	p->f1();     //A
	p->f2(); 	 //B
}
