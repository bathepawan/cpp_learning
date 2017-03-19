/*
 * Overload [] to subscripts array elements in class by using object
 *
*/

#include<iostream>

using namespace std;

class M{
	int a[10];
	public:
	void display(){cout<<"Called display method"<<endl;}
	M(){for(int i=0;i<10;i++)a[i]=i+1;}
	int operator[](int i){return a[i];}
	void operator()(){display(); };
	};


int main(){
	M m;
	for(int i=0;i<10;i++)
	cout << m[i] <<endl;
	m();
return 0;
}
