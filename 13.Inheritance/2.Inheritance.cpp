#include<iostream>
using namespace std;
class base1
{
	  int x;
	public:
		base1(int i)
		{
			x=i;
			cout<<"Base1 Initilised"<<endl;
		}
		void show_x(void)
		{
			cout <<"x = "<<x<<endl;
		}
};
class base2
{
	float y;
	public:
		base2(float j)
		{
			y=j;
			cout<<"Base2 Iniilised"<<endl;
		}
		void show_y(void)
		{
			cout<<"y = "<<y<<endl;
		}
};

class derive:public base1,public base2
{
	int m,n;
	public:
		derive(int a,float b,float c,int d):base1(a),base2(b)
		{
			m=c;
			n=d;
			cout<<"Derive Initialised"<<endl;
		}
		void show_mn(void)
		{
			cout<<"M="<<m<<endl;
			cout<<"N="<<n<<endl;
		}
};

int main()
{
	derive g(5,10.75,20,30);
	g.show_x();
	g.show_y();
	g.show_mn();
}
