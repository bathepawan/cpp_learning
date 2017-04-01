#include <iostream>
using namespace std;
class myclass {
          int a;
	public:
	        explicit myclass(int x) { a = x; }
	        int geta() { return a; }
      };


int main(){

	myclass a(4); //allowed , i.e needs explicit
	cout<<a.geta()<<endl;
	//myclass b=4; //not allowed since constructor is explicit otherwise this is valid syntax

}
