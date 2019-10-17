#include<iostream>
using namespace std;

class Base{
	public:
		Base(){
			cout<<"Constructing Base...\n";
		}
		 ~Base(){
			cout<<"Destructing Base...\n";
		}
};

class Derive:public Base{
	public:
		Derive(){
			cout<<"Constructing Derive...\n";
		}
		~Derive(){
			cout<<"Destructing Derive...\n";
		}
};

int main()
{
	Derive *d=new Derive;
	Base *b=d;
	delete b;
}


