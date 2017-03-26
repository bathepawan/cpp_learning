#include<iostream>

using namespace std;

ostream &formatit(ostream &os){

	os.width(30);
	os.precision(6);
	os.fill('*');
	return os;
}

int main(){

	float f=2.5;
	cout <<formatit <<f;

return 0;
}
