#include<iostream>
using namespace std;

int main()
{
	int x=10;	//Integer X
	char y='a';		
	
	//implicitly Converted to int 
	//value of 'a' is 97
	x=x+y;
	cout<<x<<endl;
	
	
	//X is implicitly Converted to Float
	float z=x+1.5;
	cout<<z;
}



