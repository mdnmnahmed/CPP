#include<iostream>
using namespace std;

template<class A,class B>
	void sum(A x,B y){
		cout<<x+y<<endl;
	}

template<class A,class B>
class Sum{
	A x;
	B y;
  public:
  	Sum(A m,B n){
  		x=m;
  		y=n;
	}
	Add(){
		cout<<x+y;
	}
};

int main()
{

	sum(5.5,6);
	Sum <int,float> obj1(6,6.5);
	obj1.Add();
	
}
