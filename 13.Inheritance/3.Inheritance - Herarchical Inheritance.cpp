#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		void getdata()
		{
			cout<<"Enter Value X:"<<endl;
			cin>>x;
		}
};

class derive:public base
{
	private:
	  int y;
	public:
		void readdata()
		{
			cout<<"Enter Value of Y:"<<endl;
			cin>>y;
		}
		void product()
		{
			cout<<"Product="<<x*y;
		}
};
int main()
{
	derive a;
	a.getdata();
	a.readdata();
	a.product();
	cout<<endl<<"value of X is : "<<a.x<<endl;
	//cout<<"value of Y is : "<<a.y;
}
