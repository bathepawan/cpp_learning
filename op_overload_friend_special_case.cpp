/* Both ways of overloading functions are equal in advantages except that for case like where objects and primitive data is getting operated 
 * we have to use friend function way to support both object + primitive or primitive + object way of calling them
 * this is achieved by overloading both functions prototypes
 *
 * */

#include<iostream>

using namespace std;


class MyClass{
	int a;
	public:
	MyClass(){a=0;}
	MyClass(int i){a=i;}
	void show(){cout << "a:"<< a << endl; }
	friend MyClass operator+(MyClass,int);
	friend MyClass operator+(int,MyClass);
};

MyClass operator+(MyClass obj,int i){
	MyClass t;
	t.a=obj.a+i;
	return t;
}


MyClass operator+(int i,MyClass obj){
	MyClass t;
	t.a=obj.a+i;
	return t;
}


int main(){

	MyClass O1(20);
	int i=2;
	cout << "Object.a= "<<endl;
	O1.show();
	cout << "i= "<<i<<endl;
	MyClass O2,O3;
	cout << "Object + int:"<<endl;
	O2 = O1 + i;
	O2.show();
	O3 = i + O1;
	cout << "int + Object:"<<endl;
	O3.show();
	
return 0;
}
