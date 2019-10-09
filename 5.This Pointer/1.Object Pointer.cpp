#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
   public:
   	void setDimension(int x,int y,int z)
   	{
   		l=x;
   		b=y;
   		h=z;
	}
	void showDimension()
	{
		cout<<endl<<"L="<<l<<"\tb="<<b<<"\th="<<h;
	}
};

int main()
{
	Box *p,smallBox;
	p=&smallBox;
	p->setDimension(10,5,15);   //b1.setDimension(10,5,15);
	p->showDimension();         //b1.showDimension();
}
