#include<iostream>
using namespace std;

class Convert{
	public:
		converter();
};

inline Convert::converter(){
	cout<<"Enter a Character:\n";
	char ch;
	cin>>ch;
	
	if(ch>=65 && ch<=90){
		ch=ch+32;
		cout<<"Converted into Lower-Case : "<<ch<<endl;
	}
	else if(ch>=97 && ch<=122){
		ch=ch-32;
		cout<<"Converted into Upper-Case : "<<ch<<endl;
	}
}

int main()
{
	Convert c1;
	c1.converter();
}
