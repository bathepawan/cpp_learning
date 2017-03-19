#include <iostream>

using namespace std;

class MyClass{

	int a,b;

	public:
	MyClass(){a=b=0;}
	MyClass(int i,int j){a=i;b=j;}
	void show(){cout << "a,b="<<a<<","<<b<<endl;}
	void *operator new[](size_t);
	void operator delete[](void *p);

};


void* MyClass::operator new[](size_t t){

	void *p;
	p=malloc(t);
	return p;
}

void MyClass::operator delete[](void *p){
	free(p);
}


int main(){
	MyClass *a;
	a=new MyClass[10];
	for(int i=0;i<10;i++) a[i].show();
	a[2].show();
	delete []a;
	a[2].show();
}


