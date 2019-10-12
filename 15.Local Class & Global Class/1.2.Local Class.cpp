#include<iostream>
using namespace std;

void localClass(){
	class myClass{
		  int a,b;
		public:
			setData(int x,int y){
				a=x;
				b=y;
			}
			sum(){
				cout<<"Sum= "<<a+b;
			}
	};
	
	myClass obj1;
	obj1.setData(4,6);
	obj1.sum();
}


int main()
{
	localClass();
}
