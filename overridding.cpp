/*
 *This is compile time polymorphism 
 * If run method is not define here, then since base class definition of run is used, it calls base class setup execute and teardown, i.e no runtime polymorphism 
 *
 * */

#include<iostream>
#include "classes.cpp"

using namespace std;


class Test : public Base
{
	protected:
		void setup()
		{
		Base::setup();
		cout << "Test Specific Setup"<<endl;
		}
		void execute()
		{
			Base::execute();
			cout << "Executing specific test "<<endl;
		}
		void teardown()
		{
			Base::teardown();
			cout << "Executing test specific teardown"<<endl;
		}
	public:
		void run()
		{
			setup();
			execute();
			teardown();
		}

};


int main(){
	Base *b1;
	Test t;
	b1 = &t;
	b1->run(); //run is not virtual and hence it uses the run method from base type since object type is base
	Base b;
	b1 = &b;
	b1->run();  
}
