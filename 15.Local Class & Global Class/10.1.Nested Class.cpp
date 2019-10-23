#include<iostream>
using namespace std;

class A{
	public:
		class B{
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
};

int main()
{
	A::B obj;
	obj.setData(4,6);
	obj.displayData();
}
