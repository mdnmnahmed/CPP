#include<iostream>
using namespace std;

class Product{
	int a,b;
   public:
   	void setdata(int x,int y){
   		 a=x;
   		 b=y;
	   }
	int getA(){
		return(a);
	}
	int getB(){
		return(b);
	}
};

class Item{
	int m,n;
   public:
   	Item() {}
   	Item(Product p){
   		 m=p.getA();
   		 n=p.getB();
	   }
   	
   	
   	void displayData(){
   		cout<<"In Item Class M= "<<m<<" N= "<<n<<endl;
	   }
};
 
int main()
{
	Product p1;
	Item i1;
	p1.setdata(5,10);
	i1=p1;
	i1.displayData();
}
