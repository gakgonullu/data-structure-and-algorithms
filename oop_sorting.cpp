#include<vector>
#include <iostream>
using namespace std;
class Rational{
	private:
		int numer;
		int denom;
	public:
		Rational(){
			numer=0;
			denom=1;
		}
		Rational(int n, int d){
			numer=n;
			denom=d;
		}
		~Rational(){;}
		int getnum(){
			return numer;
		}
		int getdenum(){
			return denom;
		}
		friend ostream& operator<<(ostream& os, const Rational& R);
		friend istream& operator>>(istream& inputs, Rational& R);
		void operator=(Rational* src);
		bool operator >(const Rational &R2){
			return (this->numer*R2.denom>R2.numer*this->denom);
		}
};

void Rational::operator=(Rational *src){
	this->numer=src->numer;
	this->denom=src->denom;
}
ostream & operator<<(ostream& os, const Rational& R){
	os<<R.numer<<" / "<<R.denom;
	return os;
}
istream& operator>>(istream& inputs, Rational& R){
	inputs>>R.numer;
	inputs>>R.denom;
	return inputs;
}
template <typename T>
void display(T dispArr[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<dispArr[i];
		cout<<" , ";
	}
}
template <typename T>
void insertionSort(T insertArr[], int n)
{
	for(int i=1; i<n; i++)
	{
		T temp=insertArr[i];
		int j=i-1;
		while((insertArr[j]>temp) && j>=0)
		{
			insertArr[j+1]=insertArr[j];
			j=j-1;
		}
		insertArr[j+1]=temp;
	}
	display(insertArr, n);
}

template <typename T>
void selectionSort(T selectArr[], int n)
{
	T temp;
	int min;
	for(int i=0; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
		{
			if(selectArr[min]>selectArr[j])
			{
				min=j;
			}
		}
		temp=selectArr[min];
		selectArr[min]=selectArr[i];
		selectArr[i]=temp;
	}
	display(selectArr, n);
}
template <typename T>
void bubbleSort(T bubbleArr[], int n)
{
	T temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(bubbleArr[j]>bubbleArr[j+1])
			{
				temp=bubbleArr[j];
				bubbleArr[j]=bubbleArr[j+1];
				bubbleArr[j+1]=temp;
			}
		}
	}
	display(bubbleArr, n);
}
int main()
{
	int size=3;
	Rational arr1[size]={Rational(55,11),Rational(3,99),Rational(22,22)};
	cout<<"Insertion Sort"<<endl;
	insertionSort(arr1, size);
	cout<<"\n----------------------------\n";
	Rational arr2[size]={Rational(55,11),Rational(3,99),Rational(22,22)};
	cout<<"Selection Sort"<<endl;
	selectionSort(arr2, size);
	cout<<"\n----------------------------\n";
	Rational arr3[size]={Rational(55,11),Rational(3,99),Rational(22,22)};
	cout<<"Bubble Sort"<<endl;
	bubbleSort(arr3, size);
	
}

