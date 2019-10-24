#include<iostream>
using namespace std;


int main()
{
	float f=5.5;
	int n=static_cast<int>(f);
	cout<<n<<endl;
	
	int x=10;
	float z=static_cast<float>(x+1.5);
	cout<<z;
}
