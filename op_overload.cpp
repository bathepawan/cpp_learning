/*
 *
 *==========================================  Operator Overloading =========================================================================
 *
 * Operator Overloading , operator memeber function
 *Overloading binary operator function takes one argument , unary operator function takes no argument;
 *By increment by default pre inc/dec gets oveloaded when no arg is supplied to operator function, to overload post inc/dec pass one int arg to operator function 
 * this pointer value can be returned like this return *this;
 * =============================================================== =========================================================================
 *
 * */



#include<iostream>

using namespace std;

class A
{
	int a,b;
	public:
		A(){a=b=0;}
		A(int x){a=b=x;}
		A(int x,int y){a=x;b=y;}
		A operator+(A);
		A operator-(A);
		A operator++();
		A operator++(int);
		void show(){ cout << "a="<<a<<", b="<<b<<endl; }
};


A A::operator+(A obj){
	A t;
	t.a=obj.a + a;
	t.b=obj.b + b;
	return t;
	}

A A::operator-(A obj){
	A t;
	t.a=a-obj.a;
	t.b=b-obj.b;
	return t;
	}

A A::operator++(){
	a++;
	b++;
	return *this;
	}
A A::operator++(int x){
	++a;
	++b;
	return *this; 
	}

int main(){
	A obj1;
	A obj2(10,10);
	A obj3(20,20);
	cout << "obj1:"<<endl;
	obj1.show();
	cout << "obj2:"<<endl;
	obj2.show();
	cout << "obj3:"<<endl;
	obj3.show();
	
	A obj4;
	obj4 = obj2 + obj3 ;
	A obj5;
	obj5 = obj3 - obj2;
	cout << "obj4: obj2 + obj3 "<<endl;
	obj4.show();
	cout << "obj5: obj3 - obj2 "<<endl;
	obj5.show();

	++obj1;
	++obj2;
	++obj3;
	obj4++;
	obj5++;
	cout << "All after incrementing:"<<endl;
	cout << "obj1:"<<endl;
	obj1.show();
	cout << "obj2:"<<endl;
	obj2.show();
	cout << "obj3:"<<endl;
	obj3.show();
	cout << "obj4:"<<endl;
	obj4.show();
	cout << "obj4:"<<endl;
	obj5.show();
	return 0;	
	}
