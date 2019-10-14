#include<iostream>
using namespace std;

class myClass{
	public:
		void displayThisP(){
			cout<<"Value of this Pointer : "<<this<<endl;
		}
};

int main()
{
	myClass obj1;
	obj1.displayThisP();
	myClass obj2;
	obj2.displayThisP();
	myClass obj3;
	obj3.displayThisP();
	myClass obj4;
	obj4.displayThisP();
	myClass obj5;
	obj5.displayThisP();
	myClass obj6;
	obj6.displayThisP();
	myClass obj7;
	obj7.displayThisP();
	myClass obj8;
	obj8.displayThisP();
}
