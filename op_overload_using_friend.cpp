/*Friend function since are not member functions, needs to pass two argument (since no this ptr) for binary operator overload and one argument for unary operator oveloading
 *
 *
 * Type					Unary		Binary		post inc/dec
 * 1. Member function overload		No operand	One Operand	One Object and One int		
 * 2. Friend function overload		One Operand	Two Operand	Two objects and One int
 *
 * For unary operator using friend function if calling objects is expected to get alter pass object to operator function as reference &*
 *
 * */


#include<iostream>

using namespace std;


class A{

	int a,b;
	public:
	A(){a=b=0;};
	A(int x,int y){a=x;b=y;}
	void show(){cout<<"a="<<a<<" ,b="<<b<<endl;}
	friend A operator+(A,A);
	friend A operator++(A); // Calling object would not be altered 
	friend A operator++(A&,int); // Calling object would be altered
};

A operator+(A a1,A a2){
	A t;
	t.a = a1.a + a2.a;
	t.b = a1.b + a2.b;
	return t;
}

A operator++(A a1){

	a1.a++;
	a1.b++;
	return a1;
}

A operator++(A &a1,int i){
	a1.a++;
	a1.b++;
	return a1;

}
int main(){
A o1(10,10);
A o2(20,20);

A o3;
o3 = o1+o2;

A o4;
o4= ++o1;

A o5;
o5= o2++;

cout << "Object 1:"<<endl;
o1.show();
cout << "Object 2:"<<endl;
o2.show();

cout << "Object 3: 1+2"<<endl;
o3.show();

cout << "Object4: ++1"<<endl;
o4.show();
o1.show();
cout << "Object5: 2++"<<endl;
o5.show();
o2.show();

return 0;
}
