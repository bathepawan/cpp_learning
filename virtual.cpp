// virtual functions differs only when called using pointers , if used with normal objects behaves like other method
// Base class pointer can be used to access both base and derived class virtual method by knwoing the type of object contained in pointer
// Only upcasting is supported , i.e base can point to derived and only base class members are accessible , however derived class member can be accessed by explicit cast on ptr ot//  derived type
// pure virtual functions are without body virtual void pv()=0; , class which have atleast one pure virtual function is class abstract class 
//

#include <iostream>

using namespace std;

class Base
{
	public:
		virtual void display(){cout<<"From Base Class"<<endl;}
};

class Derived1: public Base{
	public:
		void display(){cout<<"From Derived1 Class"<<endl;}
};

int main(){
	Base b;
	Derived1 d1;
	Derived1 *dptr;
	Base *bptr;
	cout << "this is from base class obj"<<endl;
	b.display();
	cout << "this is from derived class obj"<<endl;
	d1.display();

	cout <<"this is with bptr pointing to base class obj"<<endl;
	bptr = &b;
	bptr->display();
	cout << "this is with bptr pointing to derived class obj"<<endl;
	bptr = &d1;
	bptr -> display();

	dptr = &d1;
	cout << "Derived class ptr pointing to derived obj "<<endl;
	dptr -> display();

	cout << "Derived class ptr pointing to base obj , doesnt work"<< endl;
	//dptr = &b;
	//dptr -> display();
}
