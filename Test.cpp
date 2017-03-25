#include<iostream>

using namespace std;


class Base
{
protected:
	void setup();  // in MyTest.cpp when run method is called, it refers to base class run method since derived do not have 
	// run method, since base class method is called any function call in base class run method will look for base class function if virtual not specified else
	// will use derived type if virtual is used i.e since derived object is used in invoking
	virtual void execute();
	virtual void teardown();
public:
	void run();
};


/*
class Test: public Base
{
	public:
	void doSomething()
	{	
		cout << "Doing something here" << endl;
	}
	protected:
	void execute()
	{
	doSomething();
	}

};

*/

void Base::setup()
	{
		                
                cout << "Setting up for test" << endl;
        }
void Base::execute()
        {

                cout << "Started execution" << endl;

        }

void Base::teardown()
        {
                cout << "tearing down" << endl;
        }
void Base::run()
        {
        setup();
        execute();
        teardown();
        }

/*
int main()
{

Test t = Test();
t.run();
return 0;
}

*/
