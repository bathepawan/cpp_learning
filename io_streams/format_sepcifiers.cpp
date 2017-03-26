/*
 * setf(ios::uppercase) -- e or E in scientifi notation 
 * ios::showpoint -- > show decimal point for float numbers even if not needed 
 * ios:showpos --> show positive sign for positive number 
 * cout.setf(ios::uppercase) -> cout.unsetf(ios::uppercase)
 * format flags are enumerated bit fields
 * */
#include<iostream>

using namespace std;


int main()
{
	float i=88;
	cout.setf(ios::showpoint | ios::showpos);
	cout <<i<<endl;
	cout.unsetf(ios::showpoint | ios::showpos);
	cout.setf(ios::uppercase | ios::scientific);
	cout <<i<<endl;
	cout.unsetf(ios::uppercase | ios::scientific);
	cout << i <<endl;
	cout.setf(ios::uppercase);
	int f=45;
	cout.setf(ios::hex,ios::basefield); // notice , i.e two params to setf, second params tell what needs to be cleared ie basefield, and first param is set
	cout<< f <<endl; // 2D
	cout.setf(ios::hex,ios::basefield | ios::uppercase); // unset uppercase along with basefield
	cout << f << endl; //2d
	cout.setf(ios::oct,ios::basefield);
	cout << f << endl;

}
