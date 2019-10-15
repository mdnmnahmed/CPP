#include<iostream>
using namespace std;

class myClass{
	static int count;
   public:
   	myClass(){
   		count++;
   		cout<<"Object created Number:- "<<count<<endl;
	}
	~myClass(){
		cout<<"Object Destroyed Number:- "<<count<<endl;
		count--;
	}
};

int myClass::count;

int main()
{
	myClass obj1,obj2,obj3;
	/*{
		cout<<"\nBlock 1\n";
		myClass obj5;
	}
	{
		cout<<"\nBlock 2\n";
		myClass obj6;
	}*/
}
