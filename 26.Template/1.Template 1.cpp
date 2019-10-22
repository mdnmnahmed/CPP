#include<iostream>
using namespace std;

//template <class N> N big(N a,N b) //If the DataTypes r Same we can use it bt when the DataTypes r Different we can't use it
template <class N, class M>     //If the DataTypes r Different
N big(N a,M b)
{
	if(a>b)
	   return(a);
	else
		return(b);
}

int main()
{
	cout<<big(9,5);
	cout<<endl;
	cout<<big(10.5,11);
}
