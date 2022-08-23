#include <iostream>
#include <stack>
using namespace std;
template <class T>
class Stack {
private:
   T *Data;
   int Top, Size;
public:
    Stack(int size=10) { Top=-1; Size= size; Data= new T[size];}
   void push(T d) { Top= Top+1; Data[Top]= d;}
   T pop( ) { Top= Top-1; return Data[Top+1];}
   bool isEmpty( ) { return Top == -1;}
   bool isFull( ) { return Top == Size-1;}
   void print( ) { for(int i=0;i<=Top;i++) cout<<Data[i]<<" "; cout<<endl;}
};

int main() {
  Stack<int> S1(13);
  Stack<int> S2(13);
  
  for(int i=13; !S1.isFull( ); i--) {
    S1.push(i);
  }
  for(int i=13; !S2.isFull(); i--)
  {	
  	S2.push(i);
  }
  //S1.print();
  /*for(int i=0; i<13; i++)
  {
  	cout<<" - ";
  }
  cout<<endl;
  S2.print();*/
  for(; !S1.isEmpty( );) {
    cout<<S1.pop()<<"/"<<S2.pop();
    if(!S1.isEmpty())
    	cout<<" - ";
  }
  cout<<endl<<endl;
  cout<<"rational push"<<endl;
  stack<int>s1;
  stack<int>s2;
  s1.push(16);
  s2.push(16);
  int i=15;
  while(i>0)
  {
  	s1.push(i);
  	i--;
  }
  int j=15;
  while(!s2.empty()&&j>1)
  {
  	s2.push(j);
  	j--;
  }
  while(!s1.empty())
  {
    cout<<s1.top()<<"/"<<s2.top();
    s1.pop();
    s2.pop();
    if(!s1.empty())
    	cout<<" - ";
  }
  return 0;
}
