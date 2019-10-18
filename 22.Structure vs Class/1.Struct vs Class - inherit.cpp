#include<iostream>
using namespace std;

/*class Base{
	int x;
};

class Derived:Base{
	
};*/

struct Base{
	int x;
};

struct Derived:Base{
	
};

int main()
{
	Derived obj1;
	obj1.x=10;
	cout<<obj1.x;
}

