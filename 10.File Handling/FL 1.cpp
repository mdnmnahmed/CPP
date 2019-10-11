#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("myfile.txt");
	
	fout<<"Hello Numan";
	
	fout.close();
	cout<<"ur Txt is Inserted";
}
