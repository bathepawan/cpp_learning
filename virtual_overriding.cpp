/*
 *This is compile time polymorphism 
 * If run method is not define here, then since base class definition of run is used, it calls base class setup execute and teardown, i.e no runtime polymorphism 
 *
 * */

#include<iostream>
#include "virtual_base.cpp"

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
/*
 * void run()
		{
			setup();
			execute();
			teardown();
		}

*/
};

int main(){

	Base *t;
	Test t1;
	Base b;
	t=&t1;
	cout << "Using pointers"<<endl;
	t->run();
	t=&b;
	t->run();

	cout << "Using objects"<<endl;
	b.run();
	t1.run();
}
