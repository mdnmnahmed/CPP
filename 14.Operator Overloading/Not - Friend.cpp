#include<iostream>
using namespace std;

class Complex{
	int i;
   public:
   	void setData(int x){
   		i=x;
	}
	void displayData(){
		cout<<"\t"<<i<<endl;
	}
	friend Complex operator!(Complex &);
};
Complex operator!(Complex &n){
		n.i=!n.i;
}

int main()
{
	int m;
	cout<<endl<<endl;
	cout<<"Enter a Number : \n";
	cin>>m;
	cout<<endl;
	
	Complex c1;
	c1.setData(m);
	cout<<"Before Overloading---";
	c1.displayData();
	!c1;
	cout<<"After Overloading---";
	c1.displayData();
}
