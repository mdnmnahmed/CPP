#include<string.h>
#include<fstream>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("P4.txt","rb",stdin);
	string line;
	while(getline(cin,line)){
		cout<<line<<endl;
	}
	return 0;
}
