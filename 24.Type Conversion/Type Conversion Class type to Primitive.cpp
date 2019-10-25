#include<iostream>
using namespace std;

class Clss1{
	int a,b;
   public:
   	void setData(int m,int n){
   		a=m;b=n;
	   }
   	void displayData(){
   		cout<<"In the Class A= "<<a<<" B= "<<b<<endl;
	   }
	operator int()
	{
		return(a,b);
	}
};

int main()
{
	Clss1 obj1;	
	obj1.setData(5,10);
	obj1.displayData();
	
	int x,y;
	x=obj1;
	y=obj1;
	cout<<"In the Main X= "<<x<<" Y= "<<y;
}

