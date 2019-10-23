#include<iostream>
using namespace std;

int main()
{
	int x=10;
	char y='a';
	
	x=x+y;	//Implicitly converted into int 
	cout<<x<<endl;
	
	float z;
	z=x+1.5;	//Implicitly converted into float 
	cout<<z;
}



