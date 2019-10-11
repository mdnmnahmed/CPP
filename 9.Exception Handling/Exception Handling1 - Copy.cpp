#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter 2 Numbers:\n";
	int a,b;
	cin>>a>>b;
	int x=a*b;
	
	try{
		if(x!=0){
			cout<<"Product: "<<x;
		}else{
			throw(x);
			cout<<"This line never print\n";
		}
	}
	catch(int i){
		cout<<"Exception Caught\n Cant Multiply...\n";
	}
}
