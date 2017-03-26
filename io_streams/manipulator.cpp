#include<iostream>
#include<iomanip> // io manipulators 
using namespace std;

int main(){

int i=100;
float f=3.4;
char s[]="Hey Baby";

	cout << showbase <<hex << i << endl;

	cout << setw(40) << setfill('_')<< s<<endl;

	cout << scientific << f <<endl;
	cout << scientific << uppercase << f << endl;
	cout << showbase << oct << i << endl;

}
