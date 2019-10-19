#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("myfile.dat",ios::app|ios::binary);  //By Default
	
	//n.close();
}
