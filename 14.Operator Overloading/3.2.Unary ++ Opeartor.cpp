#include<iostream>
using namespace std;
		//Overloading Unary ++ Operator
class Complex{
	int a,b,c;
   public:
   	void setData(int x){
   		a=x;
	}
	void displayData(){
		cout<<a<<endl;
	}
	int operator++(){
		++a;
	}
	int operator++(int){
		a++;
	}
};

int main()
{
	cout<<"\t***Overloading Unary ++ Operator***\n";
	Complex c1,c2;
	c1.setData(5);
	++c1;
	c1.displayData();
	c1++;
	c1.displayData();
	c1++;
	++c1;
	c1.displayData();
}
