#include<iostream>
using namespace std;

class Clss{
		int a,b,c;
	public:
	   Clss(int x){
	   	   a=x;
	   	   cout<<"Single Paramerterized Constructor"<<endl;
	   	   cout<<"A: "<<a<<endl;
	   }
	   Clss(int x,int y){
	   	   a=x;
	   	   b=y;
	   	   cout<<"Dual Paramerterized Constructor"<<endl;
	   	   cout<<"A: "<<a<<endl;
	   	   cout<<"B: "<<b<<endl;
	   }
	   Clss(int x,int y,int z){
	   	   a=x;
	   	   b=y;
	   	   c=z;
	   	   cout<<"Triple Paramerterized Constructor"<<endl;
	   	   cout<<"A: "<<a<<endl;
	   	   cout<<"B: "<<b<<endl;
	   	   cout<<"C: "<<c<<endl;
 	   }
	   Clss(Clss &n){
	   	   a=n.a;
	   	   cout<<"Copy Constructor---"<<endl;
	   	   cout<<"A: "<<a<<endl;
	   }
};

int main()
{
	int n,m,o;
	cout<<"Enter Numbers:"<<endl;
	cin>>m;
	cin>>n;
	cin>>o;
	Clss obj1(m);
	Clss obj2(m,n);
	Clss obj3(m,n,o);
	Clss obj4(obj1);
}
