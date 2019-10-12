#include<iostream>
using namespace std;

namespace MyNspace{
	int a;
	int fun1();
	class Clss1{
		public:
			void fun2();
			int getNSendA(int x){
				a=x;
				return a;
			}
	};
	
}
int MyNspace::fun1(){
	cout<<"This is Fun1 Function"<<endl;
}

void MyNspace::Clss1::fun2(){
	cout<<"This is Fun2 Function"<<endl;
}
using namespace MyNspace;
int main()
{
	cout<<"Hello Numan"<<endl;
	fun1();
	Clss1 obj1;
	obj1.fun2();
	obj1.getNSendA(5);
	cout<<"A is:"<<a;
}
