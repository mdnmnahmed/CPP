#include<iostream>
using namespace std;

class myClass{
	public:
		myClass(){
			cout<<"Obj Created...\n";
		}
		~myClass(){
			cout<<"Obj Deleted...\n";
		}
};

int main()
{
	myClass obj1;
	
	myClass *obj2=new (myClass);
	delete (obj1);
	
	myClass obj3;
}
