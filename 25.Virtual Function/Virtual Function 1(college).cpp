#include<iostream>
using namespace std;

class Mainbase{
	protected:
		int roll;
	public:
		void getNumber(int a)
		{
			roll=a;
		}
		void putNumber(void)
		{
			cout<<"Roll No :"<<roll;
		}
};

class base1:virtual public Mainbase{
	protected:
		float part1,part2;
	public:
		void getMarks(float x,float y)
		{
			part1=x;
			part2=y;
		}
		void putMarks(void)
		{
			cout<<"Mark Obtained:"<<endl;
			cout<<"Part1:"<<part1<<endl;
			cout<<"Part2:"<<part2<<endl;
		}
};

class base2:public virtual Mainbase{
	protected:
		float score;
	public:
		void getScore(float s)
		{
			score=s;
		}
		void putScore(void)
		{
			cout<<"Sports Marks:"<<score;
		}
};

class derive:public base1,public base2{
	  float total;
	public:
		void display(void)
		{
			total=part1+part2+score;
			putNumber();
			putMarks();
			putScore();
			cout<<"Total Score="<<total;
		}
};

int main()
{
	derive std1;
	std1.getNumber(101);
	std1.getMarks(30.5,25.5);
	std1.getScore(70.5);
	std1.display();
}
