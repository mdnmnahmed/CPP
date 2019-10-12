#include<iostream>
using namespace std;

class myClass{
	  int a,b;
	public:
		setData(int x,int y){
			a=x;
			b=y;
		}
		sum(){
			cout<<"Sum= "<<a+b<<endl;
		}
};


myClass obj1;	//Global object Declaration


int main()
{
	myClass obj2;	//Local object Declaration
	obj2.setData(5,10);
	obj2.sum();
	
	
	obj1.setData(6,4);
	obj1.sum();
}


