#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("Data.txt");    //Class & Object
	char name[30];                //Variable
	float cost;					  //variable
		//Inserting Data
	cout<<"Enter Product Name:\n";
	cin>>name;
	cout<<"Enter Cost:\n";
	cin>>cost;
		//Writing in the File
	outf<<name<<"\n"<<cost<<"\n";
		
	ifstream inf("Data.txt");     //Class & Object
	      //Getting Data from the File
	inf>>name;					 
	inf>>cost;
	       //Printing Data
	cout<<"Product Name:"<<name<<"\n";
	cout<<"Product Cost:"<<cost<<"\n";
}
