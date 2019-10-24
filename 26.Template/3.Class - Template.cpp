#include<iostream>
using namespace std;

template <class A,class B>
class Sum{
	A x;
	B y;
   public:
   	Sum(A m,B n){
   		x=m;
		y=n;
	}
	addData(){
		cout<<x+y;
	}
};

int main()
{
	Sum <int,float>obj1(5,5.5);
	obj1.addData();
}
