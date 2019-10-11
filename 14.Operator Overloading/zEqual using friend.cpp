#include<iostream>
using namespace std;

class Complex{
	int a;
   public:
   	   void setData(int x){
   	   		a=x;	
	   }
	  void displayData(){
	  	   cout<<a<<endl;
	  }
	friend int operator==(Complex &,Complex &);
};
int operator==(Complex &m,Complex &n){
			if(m.a==n.a){
				return 1;
			}else{
				return 0;
			}
}
		
int main()
{
	int x,y;
	cout<<"Enter value of X : \n";
	cin>>x;
	cout<<"Enter value of Y : \n";
	cin>>y;
	Complex c1,c2;
	c1.setData(x);
	c2.setData(y);
	cout<<"\n\tX :\t";
	c1.displayData();
	cout<<"\tY :\t";
	c2.displayData();
	cout<<"\n\n";
	if(c1==c2){
		cout<<"X & Y is Equal.\n";
	}else{
		cout<<"X & Y is not Equal.\n";
	}
}
