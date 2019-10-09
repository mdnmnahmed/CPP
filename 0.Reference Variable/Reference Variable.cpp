#include<iostream>
using namespace std;

int main()
{
	int a,j=10;   //Ordinary variable
		a=5;
	int *p;  //Pointer Varianle
	 	p=&a;
	int &x=a;  //Reference Variable
	x++;
	cout<<x<<endl;
	
	x=j;
	cout<<a<<endl;
	cout<<x<<endl;
}
