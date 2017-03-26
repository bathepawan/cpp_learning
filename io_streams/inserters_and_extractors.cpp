/*
 * insertors -- > insert data on output stream 
 * ostream & operator<<(ostream &os,ClassType t);
 *
 * extractors -- > extracts data from input stream 
 *
 * istream & operator>>(istream &is, ClassType &t); notice data type is also reference since extracted values from i/p stream will be assigned to object
 *
 *
 * */

#include<iostream>

using namespace std;

class Person{

 
		char name[30];
		char sur_name[30];
		int age;
	public:
		Person(){}
		Person(char n[],char s[],int a){strcpy(name,n); strcpy(sur_name,s); age =a ;}
		friend ostream &operator<<(ostream &, Person);
		friend istream &operator>>(istream &, Person &p);
};


ostream &operator<<(ostream &s, Person p){

s<<"Name:"<<p.name<< " | ";
s<<"Sur-Name:"<<p.sur_name<< " | ";
s<<"Age:"<<p.age<<" |"<<endl;
return s;
}

istream &operator>>(istream &is, Person &p)
{
	cout << "Enter Name,sur-name and age:" << endl;
	is >> p.name;
	is >> p.sur_name;
	is >> p.age;
return is;
}
int main(){

	Person P1("John","Saito",26);
	Person P2;
	cin >> P2;
	cout<<P1<<P2;
}
