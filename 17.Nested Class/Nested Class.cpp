#include<iostream>
#include<string.h>
using namespace std;

class Student{
	int rollno;
	char name[20];
	//Address Class Start
	    class Address{
	    	int houseno;
	    	char street[20];
	    	char city[20];
	    	char state[20];
	    	char pincode[7];
	      public:
	      	void setAddress(int h,char *s,char *c,char *st,char *p){
	      		houseno=h;
	      		strcpy(street,s);
	      		strcpy(city,c);
	      		strcpy(state,st);
	      		strcpy(pincode,p);
			  }
			void showAddress(){
				cout<<"Address : "<<houseno<<" "<<street<<" "<<city<<" "<<state<<" "<<pincode<<" "<<endl;
			}
		};
	//Address Class End
	    Address add; //Creating Object
	public:
		void setRollno(int r){
			rollno=r;
		}
		void setName(char *n){
			strcpy(name,n);
		}
		void setAddress(int h,char *s,char *c,char *st,char *p){
			add.setAddress(h,s,c,st,p);
		}
		void showStudent(){
			cout<<"Student Data---"<<endl;
			cout<<"Roll No : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
			add.showAddress();
		}
};

int main()
{
	Student s1;
	s1.setRollno(33);
	s1.setName("Numan");
	s1.setAddress(27,"Sebadal Road","Kolkata","WB","733221");
	s1.showStudent();
}

