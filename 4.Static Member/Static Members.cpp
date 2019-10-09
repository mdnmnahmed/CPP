#include<iostream>
using namespace std;

class Account
{
	int balance;        //Instance Member Variable
	static float roi;   //Static Member Variable
	public:
		void setBalance(int b)
		{
			balance=b;
		}
		static void setroi(float r)   //Static Member Function
		{
			roi=r;
			cout<<"Invoke with/Without Object="<<r<<endl;
			cout<<roi<<endl;
			
		}
};

float Account::roi=3.5f;
int main()
{
	Account a1,a2;
	a1.setroi(4.5f);     //Invoke with Object
	
	//Account::setroi(4.8f); //Invoke Without Object
}
