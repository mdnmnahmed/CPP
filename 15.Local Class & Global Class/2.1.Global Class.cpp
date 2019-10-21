#include<iostream>
using namespace std;

class myClass{
	  int a,b;
	public:
		setData(int x,int y){
			a=x;
			b=y;
		}
		displayData(){
			cout<<"Sum= "<<a+b;
		}
};

int main()
{
	myClass obj1;
	obj1.setData(4,6);
	obj1.displayData();
}
