#include<iostream>
using namespace std;

class UnaryMinus{
	int x,y,z;
   public:
   	void getData(int a,int b,int c){
   		x=a;
   		y=b;
   		z=c;
	}
	void displayData(){
		cout<<endl;
		cout<<" x:"<<x<<"\t";
		cout<<" y:"<<y<<"\t";
		cout<<" z:"<<z<<"\t";
	}
	void operator-(){	//Overload Minus
		x=-x;
		y=-y;
		z=-z;
	}
};

int main()
{
	cout<<"\t***Unary - Operator***\n";
	UnaryMinus obj;
	obj.getData(5,-6,7);
	-obj;		//Activates Operator
	obj.displayData();
	
}
