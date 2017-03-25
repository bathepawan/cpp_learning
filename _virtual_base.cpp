#include<iostream>

using namespace std;


class Base
{
protected:
	virtual void setup();
	void execute();
	void teardown();
public:
	virtual void run();
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
