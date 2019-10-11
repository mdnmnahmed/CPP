#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream n;
	char ch; 
	n.open("myfile.txt");
	ch=n.get();   //fin>>ch;
	while(!n.eof())
	{
		cout<<ch;
		ch=n.get();   //fin>>ch;
	}
	
	n.close();
}
