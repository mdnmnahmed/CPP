#include<iostream>
using namespace std;
		//Printing Cube using Inline Function
inline square(int m){
	return m*m;
}
int main()
{
	cout<<"Enter a Number to Print Square : "<<endl;
	int n;
	cin>>n;
	cout<<"square of "<<n<<" = "<<square(n)<<endl;
}
