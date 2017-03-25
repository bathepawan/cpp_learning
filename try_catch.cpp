#include<iostream>

using namespace std;
/* all exception types cab be catched by catch(...) block
 * throw; will rethrow current exception
 * void foo() throw(int) , is expected to throw int exception
 * void foo() throw() if exception is occurred unexpected handler is invoked
 * set_terminate() and set_unexpected() can be used to define custom unexpected and terminate_handler
 * exception should be catched in reverse order of inheritance hierachy ,derived to specific i.e specific to generic
 *
 * */

int main(){
int a,b;

cout <<"a:";
cin>>a;
cout <<"b:";
cin>>b;

try{
	if(!b) throw 0;
	else 
		cout <<"a/b= "<<(a/b)<<endl;
}catch(int i)
{
	cout <<"Caught Exception!!"<<endl;
	b=1;
	cout << "a/b= "<<(a/b)<<endl;
}

};
