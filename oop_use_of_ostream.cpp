#include<iostream>
using namespace std;

class Rational{
	private:
		int numer, denumer;
		
	public:
		Rational(){numer=0, denumer=1;}
		Rational(int n, int d){numer=n; denumer=d;}
	
		
		void add(Rational &left, Rational &right)
		{
			Rational *temp=new Rational();
			temp->numer=(left.numer * right.denumer) + (left.denumer * right.numer);
			temp->denumer= (left.denumer * right.denumer);
			temp->print();
			
		}
		
		void print()
		{
			cout<<numer<<"/"<<denumer;
		}
		
		friend ostream& operator <<(ostream& out, Rational &temp);
		
		~Rational(){;}
};

ostream& operator <<(ostream& out, Rational &temp)
{
	out<<temp.numer<<"/"<<temp.denumer<<" ";
	return out;
}
int main()
{
	Rational R1(1,2), R2(3,4);
	Rational *R3=new Rational();
	printf("1/2 + 3/4 = ");
	R3->add(R1,R2);
}
