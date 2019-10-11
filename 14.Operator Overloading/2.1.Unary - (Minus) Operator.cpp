#include<iostream>
using namespace std;
class Complex{
	int x,y,z;
  public:
  	void setData(int a,int b,int c){
  		x=a;
  		y=b;
		z=c;
	}
	void displayData(){
		cout<<"X: "<<x<<"\t"<<"Y: "<<y<<"\t"<<"Z: "<<z;
	}
	Complex operator-(){
		x=-x;
		y=-y;
		z=-z;
	}
};
int main()
{
	cout<<"\t***Unary - Operator***\n";
	Complex c1,c2;
	c1.setData(5,-6,7);
	cout<<"Before overloading---\n\t";
	c1.displayData();
	cout<<"\nAfter overloading---\n\t";
	-c1;
	c1.displayData();
}




