#include <iostream>

using namespace std;


template <class data>
class MyClass{

	public:
		data var;
		void set(data v){var=v;}
		void show(){cout<<var<<endl;}

};

int main(){

	MyClass<int> i;
	i.set(10);
	i.show();
	MyClass<float> f;
	f.set(10.3);
	f.show();
	MyClass<char *> s;
	s.set("MyClass");
	s.show();
	return 0;
}
