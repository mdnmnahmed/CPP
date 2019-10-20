#include<iostream>
using namespace std;
class myClass{
	int x;
   public:
   	void setData(){
   		cout<<"Enter Value of X :\n";
   		cin>>x;
	}
	void displayData(){
		cout<<"Now X is : "<<x<<endl;
	}
	void operator++(){
		++x;			//PreIncrement
		cout<<"\nApplying ++X\n";
	}
	void operator++(int){
		x++;			//PostIncrement
		cout<<"\nApplying X++\n";
	}
};

int main()
{
	myClass c1;
	c1.setData();
	++c1;
	c1.displayData();
	c1++;
	c1.displayData();
}
