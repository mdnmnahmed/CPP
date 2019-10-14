#include<iostream>
using namespace std;

class Test
{        
	static int count;
	int number;
   public:
   	void getData(int a){
   		number=a;
   		count++;
	}
	void getcount(void){
		cout<<"Count "<<count<<endl;
	}
};
int Test::count;

int main()
{
	Test a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	a.getData(100);
	b.getData(200);
	c.getData(300);
	//c.getData(400);
	cout<<"\nAfter Reading Data"<<endl;
	a.getcount();
	b.getcount();
	c.getcount();
}
