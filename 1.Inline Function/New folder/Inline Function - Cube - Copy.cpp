#include<iostream>
using namespace std;

class Convert{
	public:
		char converter();
};

inline char Convert::converter(){
	cout<<"Enter the Character:\n";
	char ch;
	cin>>ch;
	
	if(ch>65  && ch<=90){		//ASCII for A-Z = 65 to 90
		ch=ch+32;
		cout<<"Converted into Lower-Case: "<<ch;
	}
	else if(ch>97  && ch<=122){		//ASCII for a-z = 97 to 122
		ch=ch-32;
		cout<<"Converted into Upper-Case: "<<ch;
	}
	else{
		cout<<"Not a Character";
	}
	
}

int main()
{
	Convert c;
	c.converter();
}
