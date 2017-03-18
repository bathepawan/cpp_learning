#include<iostream>
using namespace std;

class A
{
	int l,b,h;
public:
	A(){l=b=h=0;}
	A(int a,int d,int c){l=a;b=d;h=c;}
	A(int a){l=b=h=a;}	
	A(A &obj){l=obj.l;b=obj.b;h=obj.h;}
	void print(){cout<<l<<"\t"<<b<<"\t"<<h<<endl;};
};


int main(){
	A b1;
	b1.print();
	A b2(10);
	b2.print();
	A b3(10,20,30);
	b3.print();
	cout << "After Copy Constructor Called"<<endl;
	A c1(b3);
	A c2(b2);
	A c3(b1);
	c1.print();
	c2.print();
	c3.print();
	return 0;
}
