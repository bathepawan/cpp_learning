#include<iostream>

using namespace std;

class Demo{
	const int a;
	const int b;

	public:
		Demo(int i,int j):a(i),b(j){/*a=i;b=j;*/} /* a=i and b=j assignment is not allowed since a and b are consts, so we have to use member initialization sytax */
		void display(){cout<<"a,b ="<<a<<", "<<b<<endl;};

};
int main(){

	Demo d1(20,30);
	d1.display();
	return 0;
}
