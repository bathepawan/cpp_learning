#include <iostream>

using namespace std;

class A{
	private:
		int a;
	public:
		A(int i){a=i;}
		operator int(){return a;} // Object gets converted to int type
};

int main(){
	int n;
	A obj(30);
	n=obj;
	cout << "Value of n after converting from object: "<<n<<endl;
	return 0;
}
