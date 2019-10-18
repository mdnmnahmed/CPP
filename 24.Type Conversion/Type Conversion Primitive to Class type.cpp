#include<iostream>
using namespace std;

class Clss1{
	int a,b;
   public:
   	Clss1(){}
   	Clss1(int n){
	     a=n;
	     b=0;
	   }
   	
   	void displayData(){
   		cout<<"A= "<<a<<endl<<"B= "<<b;
	   }
};

int main()
{
	Clss1 obj1;
	int x=5;
	obj1=x;
	
	obj1.displayData();
}

