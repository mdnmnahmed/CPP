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
		int operator==(Complex n){
			if(a==n.a){
				return 1;
			}else{
				return (0);
			}
		}

};

int main()
{
	int x,y;
	Complex c1,c2;
	cout<<"Enter value of X : \n";
	cin>>x;
	cout<<"Enter value of Y : \n";
	cin>>y;
	c1.setData(x);
	c2.setData(y);
	
	if(c1==c2){
		cout<<"X & Y is Equal.\n";
	}else{
		cout<<"X & Y is not Equal.\n";
	}	
}
