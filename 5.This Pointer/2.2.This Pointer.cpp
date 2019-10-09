#include<iostream>
using namespace std;

class MyClass{
	  int a;
	public:
		MyClass(int =0);
		
		void display() const;
};

MyClass::MyClass(int val):a(val){  		//initialize to a val
	
}
void MyClass::display() const
{
 	cout<<"Value of A : "<<a<<endl;    //Emplicit use of this pointer
 	cout<<"Value of this->a : "<<this->a<<endl;  
 	cout<<"the value of (*this) .a : "<<(*this).a<<endl;
}

int main()
{
	MyClass obj(10);
	obj.display();
}
