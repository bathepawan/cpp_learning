#include<iostream>
#include<exception>
using namespace std;

void except_handler(){
cout << "Closing all stuff"<<endl;
abort();
}


int main(){

	set_terminate(except_handler);
	try{
		throw 0;
	}catch(float f)
	{
	cout << "Caught float"<<endl;
	}

return 0;
}
