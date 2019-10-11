#include<iostream>
using namespace std;

class myClass{
	   int a,b;
	public:
		setData(int x,int y){
			a=x;
			b=y;
		}
		friend int sum(myClass);
};

int sum(myClass n){
	 //return n.a+n.b;
	 cout<<n.a+n.b;
}

int main()
{
	myClass obj1;
	obj1.setData(4,8);
	//cout<<sum(obj1);
	sum(obj1);
}
