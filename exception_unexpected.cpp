#include<iostream>
#include<exception>
using namespace std;

void throwme() throw()
{
 throw 0;
}

void munexpected_handler(){
cout << "this was not expected"<<endl;
abort();
}
int main(){
	set_unexpected(munexpected_handler);
	throwme();
}

