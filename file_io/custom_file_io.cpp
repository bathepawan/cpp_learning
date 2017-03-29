#include<iostream>
#include<fstream>

using namespace std;

struct Person{
int age;
char name[30];
};

istream &operator>>(istream& i, Person p)
{

	i>>p.age;
	i>>p.name;
	return i;
}	

ostream &operator<<(ostream& o,Person p){

	o<<p.age;
	o<<endl;
	o<<p.name;

	return o;
}

int main(){

Person P,P1;
P.age=25;
strcpy(P.name,"Pawan");

cout<<P.age<<" ,"<<P.name<<endl;

ofstream out("person.txt");

out<<P;

out.close();
ifstream in("person.txt");
in>>P1;
in.close();

cout<<P1.age<<" ,"<<P1.name<<endl;

}
