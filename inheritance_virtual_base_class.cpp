#include <iostream>

using namespace std;

class A{
	public:
	int i;
};

class B: virtual public A{
	public:
	int j;
	void show(){cout<<"i,j="<<i<<", "<<j;};
};

class D:virtual public A, public B{

	void showd(){cout << "i,j ="<<i<<", "<<j;}

};


int main()
	{
	D d1;
	d1.i=10;
	d1.j=20;
	d1.show();
	}
