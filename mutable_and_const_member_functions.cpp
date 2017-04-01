#include<iostream>

using namespace std;

class Demo{
	mutable int i;
	int j;

	public:
		Demo(int a,int b){i=a;j=b;}
		void setValues(int a,int b) const{ i=a;/*j=b;*/} //const member function can not modify this pointer , however it can modify mutable member of that object
		void display(){cout<<"i,j ="<<i<<", "<<j<<endl;};

};

int main(){
	Demo d(20,30);
	d.display();
	d.setValues(40,50);
	d.display();
	return 0;
}
