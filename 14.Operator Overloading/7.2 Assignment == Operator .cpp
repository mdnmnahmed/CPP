#include<iostream>
using namespace std;

class Complex{
	int a,b;
   public:
   	   Complex(int x,int y){
   	   		a=x;
   	   		b=y;
		}
	    void displayData(){
	    	cout<<a<<endl;
		}
		int operator==(Complex n){
		if(a==n.a && b==n.b){
			return 1;
		}else{
			return (0);
		}
}

};

int main()
{
	int x,y;
	Complex c1(3,4),c2(3,5);
	/*cout<<"Enter value of X : \n";
	cin>>x;
	cout<<"Enter value of Y : \n";
	cin>>y;
	c1.setData(5,5);
	c2.setData(6,6);*/
	
	if(c1==c2){
		cout<<"X & Y is Equal.\n";
	}else{
		cout<<"X & Y is not Equal.\n";
	}
	
}
