#include<iostream>
using namespace std;

class myClass{
	int a,b,*p;
   public:
	myClass(int x,int y,int z){
		a=x;
		b=y;
		p=new int;
		*p=z;
	}
	void display(){
		cout<<"a="<<a<<"\tb="<<b<<"\tp="<<*p;
	}
	
};
int main()
{
	myClass obj2(5,6,7);
	obj2.display();
}
