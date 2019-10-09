#include<iostream>
using namespace std;

class myClass{
	int a,b;
  public:
  	myClass()
  	{
  		a=0;
  		b=0;
  		cout<<"This is Default Constructor...\n";
		cout<<"Value of A="<<a<<"\tB="<<b<<"\n\n";
		
	}
	myClass(int x,int y){
		a=x;
		b=y;
		cout<<"This is Parameterized Constructor...\n";
		cout<<"Value of A="<<a<<"\tB="<<b<<"\n\n";
	}
	myClass(myClass &n){
		a=n.a;
		b=n.b;
		cout<<"This is Copy Constructor...\n";
		cout<<"Value of A="<<a<<"\tB="<<b<<"\n\n";
	}
};

int main()
{
	myClass obj1;
	myClass obj2(5,6);
	myClass obj3(obj2);
	myClass obj4(obj3);
}
