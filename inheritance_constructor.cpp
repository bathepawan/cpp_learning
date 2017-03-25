
/*
 * Constructors are invoked in the order of derivation
 * Destructors are invoked in the reverse order of derivation
 * If base class has parameterized constructor , it is responsiblity of derived class constructor to pass arguments to base class constructor (or set default values to base class
 * constructor ) 
 * 
 * */

#include<iostream>

using namespace std;

class Base{
		public:
			int a,b;
			Base(int i=10,int j=20){
				a=i;b=j;
				cout << "Base Class Constructor"<<endl;
			}
			~Base(){cout<<"Base class destructor"<<endl;}
			void show(){cout <<"a,b ="<<a<<", "<<b<<endl;}
	};


class Derived: public Base{
	int c,d;
	public:
	Derived(int x,int y,int z, int w)
	{
		c=z;
		d=w;
		cout << "Derived Class Constructor"<<endl;
	}
	~Derived(){cout<<"Derived class destructor"<<endl;}
	void show(){cout<<"a,b,c,d ="<<a<<","<<b<<","<<c<<","<<d<<endl;}
};


int main(){
	Derived d(1,2,3,4);
	d.show();
}
