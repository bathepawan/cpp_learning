#include <iostream>

using namespace std;

class Base{

	public:
		Base(){cout<<"Constructing Base"<<endl;}
		virtual ~Base(){cout<<"Destructing Base"<<endl;}
		// ~Base(){cout<<"Non virtual base destructor"<<endl;}
		// If this is not defined virtual, while trying to delete base class object pointer delete b below which points to derived object, 
		// derived destructor will not be invoked
};

class Derived: public Base{

	public:
		Derived(){cout<<"Constructing Derived"<<endl;}
		~Derived(){cout<<"Destructing Derived"<<endl;}
};


int main(){
	Base *b= new Derived();
	delete b;
	getchar();
return 0;
}
