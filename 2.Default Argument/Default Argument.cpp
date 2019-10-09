#include<iostream>
using namespace std;
		//Default Argument
int add(int,int=0,int=0);

int main()
{
	int a,b,c;
	cout<<"Enter 2 Numbers:"<<endl;
	cin>>a>>b;
	cout<<a<<"+"<<b<<"="<<add(a,b)<<endl;
	
	cout<<"Enter 3 Numbers:"<<endl;
	cin>>a>>b>>c;
	cout<<a<<"+"<<b<<"+"<<c<<"="<<add(a,b,c)<<endl;
}

int add(int x,int y,int z)
{
	return(x+y+z);
}

