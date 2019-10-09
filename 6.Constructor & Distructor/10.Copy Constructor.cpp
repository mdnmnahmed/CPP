#include<iostream>
using namespace std;

class myClass{
	private:
		int a=5;
	protected:
		int b=10;
	public:
		int c=15;	
};
class derive:private myClass{
  public:
	void sumc(){
	    cout<<b+c;	
	} 
};
class derive2:

int main()
{
	derive c1;
	c1.sumc();
}
