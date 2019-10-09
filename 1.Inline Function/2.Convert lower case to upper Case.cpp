#include<iostream>
using namespace std;

class Convert{
	char x;
   public:
   	char char_convert();
};

inline char Convert::char_convert(){
	char ch;
	cout<<"Enter the Character:\n";
	cin>>ch;
	
	if(ch>65 && ch<=90){
		ch=ch+32;
		cout<<"Convert into Lower-Case: "<<ch;
	}
	else if(ch>97 && ch<=122){
		ch=ch-32;
		cout<<"Convert into Upper-Case: "<<ch;
	}
}

int main()
{
	Convert p;
	p.char_convert();
}
