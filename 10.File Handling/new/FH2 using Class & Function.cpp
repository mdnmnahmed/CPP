#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;	//Class & Object
	fout.open("Country.txt");  //opening File using open() function
	   //Writing in the File
	fout<<"INDIA\n";
	fout<<"USA\n";
	fout<<"UK\n";
	
	fout.close();           //Closing File using close() function
	
	fout.open("Capital.txt");
	
	fout<<"New Delhi\n";
	fout<<"Wahington DC\n";
	fout<<"London\n";
	
	fout.close();
	
	char line[80];
	
	ifstream fin;		//Class & Object
	
	fin.open("Country.txt");
	cout<<" Countries---\n";
	while(fin)
	{
		fin.getline(line,80);
		cout<<line;
		cout<<endl;
	}
	fin.close();
	
	fin.open("Capital.txt");
	cout<<" Capitals---\n";
	while(fin)
	{
		fin.getline(line,80);
		cout<<line;
		cout<<endl;
	}
	fin.close();
}
