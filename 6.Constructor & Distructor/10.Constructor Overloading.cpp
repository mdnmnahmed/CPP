#include<iostream>
using namespace std;

class Area{
	  int a;
	public:
		Area(){
			a=0;
		}
		
		Area(int l,int b){
			a=l*b;
		}
		
		display(){
			cout<<"Area: "<<a<<endl;
		}
};



int main()
{
	Area obj1;
	Area obj2(10,20);
	
	obj1.display();
	obj2.display();
}
