#include<iostream>
using namespace std;

class Base{
	private:
		void Private(){
			cout<<"This is Private\n";
		}
	public:
		void Public(){
			Private();
			cout<<"This is Public\n";
		}
	protected:
		void Protected(){
			cout<<"This is Protected\n";
		}
};

class Derive:public Base{
   public:
	void funn(){
		Protected();
	}
};

int main()
{
	Derive D;
	D.Public();
	D.funn();
}
