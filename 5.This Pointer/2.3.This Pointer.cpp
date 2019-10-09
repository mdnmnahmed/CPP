#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
   public:
   	void setDimension(int l,int b,int h)
   	{
   		this->l=l;
   		this->b=b;
   		this->h=h;
	}
	void showDimension()
	{
		cout<<endl<<"L="<<l<<"\t b="<<b<<"\t h="<<h;
	}
};

int main()
{
	Box *p,b1;
	p=&b1;
	p->setDimension(10,5,15);   //b1.setDimension(10,5,15);
	p->showDimension();         //b1.showDimension();
}
