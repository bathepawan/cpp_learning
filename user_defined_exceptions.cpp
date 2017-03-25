#include<iostream>

using namespace std;


class DivideByZeroE{
	public:
	int code;
	char str[80];
	public:
	DivideByZeroE(){code=0;strcpy(str,"Devide by zero");}

	DivideByZeroE(int i,char s[]){
		code=i;
		strcpy(str,s);}
};

int main(){

	int a,b;
	cout << "a:";
	cin  >> a;
	cout <<endl<<"b:";
	cin  >> b;

	try{
		if(!b) throw DivideByZeroE();
		else
			cout << "a/b: "<<a/b<<endl; 
	}catch(DivideByZeroE e)
	{
		cout << "Exception Caught: "<<endl;
		cout << "Error code: "<<e.code<<endl;
		cout << "Error Message: "<<e.str<<endl;
	}
}


