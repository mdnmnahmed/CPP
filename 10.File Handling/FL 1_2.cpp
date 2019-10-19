#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	//int n;
	string n[5];
	ofstream fout;
	
	fout.open("myfile.dat");
	cout<<"Enter your text:\n";
	cin>>n[5];
	fout<<n[5];
	
	fout.close();
	
}
