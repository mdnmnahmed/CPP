#include<iostream>
using namespace std;

class Complex{
	int a,b;
   public:
   	   void setData(int x){
   	   		a=x;
		}
	    void displayData(){
	    	cout<<a<<endl;
		}
		Complex operator=(Complex n){
			Complex temp;
			temp.a=n.a;
			return temp;
		}
};

int main()
{
	int x,y;
	Complex c1,c2;
	cout<<"Enter value of X : \n";
	cin>>x;
	cout<<"Enter value of Y : \n";
	cin>>y;
	
	c1.setData(x);
	cout<<"\n\nBefore Overloading---\n";
	cout<<"Value of X : \t\t";
	c1.displayData();
	c2.setData(y);
	cout<<"Value of Y : \t\t";
	c2.displayData();
	cout<<"\n\nAfter Overloading = Operator---\n";
	c2=c1;
	cout<<"(Assigning X=Y) \n";
	cout<<"\tValue of X : \t\t";
	c2.displayData();
	c1=c2;
	cout<<"\n(Assigning Y=X) \n";
	cout<<"\tValue of Y : \t\t";
	c1.displayData();
	
	
}
