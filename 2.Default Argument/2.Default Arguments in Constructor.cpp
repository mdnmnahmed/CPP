#include<iostream>
using namespace std;

class myClass{
	int x,y;
   public:
	myClass(){
		x=0;
		y=0;
		cout<<"Default Constructor Called"<<endl;
		cout<<"Values of x : "<<x<<"\t y : "<<y<<endl;
	}
	
	myClass(int a,int b=20){
		x=a;
		y=b;
		
		cout<<"Parameterized Constructor Called"<<endl;
		cout<<"Values of x : "<<x<<"\t y : "<<y<<endl;
	}
	
	
};


int main()
{
	myClass c1;
	myClass c2(10);
}
