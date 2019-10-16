#include<iostream>
using namespace std;

int main()
{
	int b=10;
	int &a=b;   //Reference variable Declaration
	cout<<"b="<<b<<"  Orginal Var"<<endl;
	cout<<"a="<<a<<"  Reference Var"<<endl;
	b++;
	cout<<"b="<<b<<"  Orginal Var"<<endl;
	cout<<"a="<<a<<"  Reference Var"<<endl;
}
