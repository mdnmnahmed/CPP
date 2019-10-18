#include<iostream>
using namespace std;

int abc=10;

int main()
{
	int abc=5;
	cout<<"Value of abc is:"<<abc<<endl;
	
	{
		int abc=15;
		cout<<"Value of abc is:"<<abc<<endl;
		cout<<"Value of abc is:"<<::abc<<endl;
	}
}
