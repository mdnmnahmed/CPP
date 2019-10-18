#include<iostream>
using namespace std;

class myClass{
	int a;
   public:
   	setData(int);
};

myClass::setData(int n){
	cout<<"SetData= "<<n;
}

int abc=5;	//Global Variable

int main()
{
	int abc=10;		//Local Variable
	cout<<"abc= "<<abc<<endl;
	
	{
		int abc=15;		//Local Variable
		cout<<"abc= "<<abc<<endl;
		cout<<"abc= "<<::abc<<endl;
	}
	
	
	myClass obj;
	obj.setData(100);
	
}
