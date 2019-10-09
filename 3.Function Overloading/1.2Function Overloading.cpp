#include<iostream>
using namespace std;

class test{
   public:
   	void sum(int x){
   		cout<<"sum="<<x+x<<endl;
	}
	void sum(int x,int y){
		cout<<"sum="<<x+y<<endl;
	}
	void sum(int x,int y,int z){
		cout<<"sum="<<x+y+z<<endl;
	}
};


int main()
{
	cout<<"\t***Function Overloading***\n";
	
	test t1;
	t1.sum(5);
	t1.sum(5,6);
	t1.sum(5,6,7);
	t1.sum(5);
}
