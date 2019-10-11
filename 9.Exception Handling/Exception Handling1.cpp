#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter Values of A & B :"<<endl;
	cin>>a>>b;
	int x=a*b;
	
	try{
		if(x!=0)
		   cout<<"Result="<<x<<endl;
		else{
		 	throw(x);
			 cout<<"This Line doesn't Print";	
		} 
	}
	catch(int i){
		cout<<"Exception Caught---\n Can't Multiply with 0";
	}
}
