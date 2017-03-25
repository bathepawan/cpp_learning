/*
 *
 * */

#include<iostream>
#include "Test.cpp"

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
	Test t1;
	t1.run();
}
