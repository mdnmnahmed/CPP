#include<iostream>
using namespace std;

class Complex
{
	    int a,b;
	public:
		friend ostream& operator<<(ostream&,Complex);
		friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex n){
	cout<<"\nA="<<n.a<<"B="<<n.b;
	return(dout);
}
istream& operator>>(istream &din,Complex &n){
	cin>>n.a>>n.b;
	return(din);
}



int main()
{
	cout<<"\t***Unary << & >> Operator***\n";
	Complex c1;
	cout<<"Enter 2 Number:\n";
	cin>>c1;	//Extraction
	cout<<"u Entered---\n";
	cout<<c1;   //Insertion
}
