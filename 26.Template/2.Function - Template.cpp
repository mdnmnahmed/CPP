#include<iostream>
using namespace std;

template <class A,class B>
void sum(A x,B y){
	cout<<x+y<<endl;
}

int main()
{
	sum(5,10);
	sum(5,5.5);
	sum(5.5,6.5);
}
