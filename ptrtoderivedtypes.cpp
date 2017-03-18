/*
Although a base class pointer can be used to point to a derived object, the opposite is not true. A pointer of type D * may not point to an object of type B. Further, although you can use a base pointer to point to a derived object, you can access only the members of the derived type that were inherited from the base. That is, you won't be able to access any members added by the derived class. (You can cast a base pointer into a derived pointer and gain full access to the entire derived class, however.)

*/
#include <iostream>
using namespace std;

class A
{
public:
	int a;
	void set(int i)
	{
	a=i;
	}
	void get()
	{
	cout << "A: "<<a << endl;
	}	
};

class B: public A
{
public:
	int b;
	void setB(int j)
	{
	b=j;
	}
	void getB()
	{
	cout << "B: "<<b << endl;
	}
};

int main()
{

A *bptr;
B *dptr;

A objb;
B objd;

cout << "Using base objects" << endl;
objb.set(10);
objb.get();

cout << "Using derived objects"<< endl;
objd.set(20);
objd.get();
objd.setB(30);
objd.getB();

cout << "Base obj ptr pointing to base obj"<<endl;
bptr = &objb;
bptr->get();

cout << "Base obj ptr pointing to derived obj"<<endl;
bptr = &objd;
bptr->get();

cout <<"Derived object ptr pointing to derived obj"<<endl;
dptr = &objd;
dptr->get();
dptr->getB();


cout << "base ptr pointing to derived objects, cant access derived class members not in base class"<<endl;
//This is not allowed , since bptr is based ptr and base class dont have getB
//bptr->getB();
//Casting base object pointer to derived pointer to access full members
cout << "Priting derived object properties using base class casting to derived type"<<endl;
((B *)bptr)->getB();

return 0;
}
