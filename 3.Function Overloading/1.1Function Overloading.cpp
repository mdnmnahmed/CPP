#include<iostream>
using namespace std;
class test
{
	public:
		void sum()
		{
			cout<<"sum="<<(3+2)<<endl;
		}
		void sum(int i)
		{
			cout<<"sum="<<i+i<<endl;
		}
		void sum(int i,int j)
		{
			cout<<"sum="<<i+j<<endl;
		}
		void sum(int i,int j,int k)
		{
			cout<<"sum="<<i+j+k<<endl;
		}
};
int main()
{
	test obj1;
	obj1.sum();
	obj1.sum(5);
	obj1.sum(10,20);
	obj1.sum(10,20,30);
}
