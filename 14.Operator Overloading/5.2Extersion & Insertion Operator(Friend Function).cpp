#include<iostream>
using namespace std;

class Complex{
	int a,b;
	friend istream& operator>>(istream&,Complex&);
	friend ostream& operator<<(ostream&,Complex);
};

istream& operator>>(istream &nin,Complex &n){
	nin>>n.a>>n.b;
}

ostream& operator<<(ostream &nout,Complex n){
	nout<<n.a<<"\t"<<n.b;
}

int main()
{
	Complex c1;
	cout<<"Enter 2 Numbers : \n";
	cin>>c1;
	cout<<"Ur entered Data---\n";
	cout<<c1;
}
