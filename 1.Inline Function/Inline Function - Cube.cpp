#include<iostream>
using namespace std;
		//Printing Cube using Inline Function
inline cube(int m){
	return m*m*m;
}
int main()
{
	cout<<"Enter a Number to Print Cube : "<<endl;
	int n;
	cin>>n;
	cout<<"Cube of "<<n<<" = "<<cube(n)<<endl;
}
