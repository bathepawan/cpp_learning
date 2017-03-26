#include<iostream>

using namespace std;

int main(){

	int n =234;
	float f = 2.3;
	char s[] = "Hello, ";
cout.width(20);
cout.precision(4);
cout.fill('*');
cout <<n <<endl;
cout.fill('#');
cout.width(10);
cout.precision(4);
cout <<f<<endl;
cout.setf(ios::right);
//cout.fill('@');
cout.width(20);
cout <<s<<endl;
}
