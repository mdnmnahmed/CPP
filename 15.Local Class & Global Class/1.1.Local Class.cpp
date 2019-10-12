#include<iostream>
using namespace std;

void function1(){
	class myClass{
		  int a,b;
		public:
			setData(int x,int y){
				a=x;
				b=y;
			}
			displayData(){
				cout<<a+b;
			}
	};
	
	myClass obj1;
	obj1.setData(4,6);
	obj1.displayData();
	
}

int main()
{
	function1();
}

