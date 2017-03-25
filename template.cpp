#include <iostream>

using namespace std;

template <class data> int maxof(data a,data b){
	return a>b?a:b;
}


int main(){
	cout << "MAX of INT"<<endl;
	cout << maxof(2,3) <<endl;
	cout << "MAX of Float"<<endl;
	cout << maxof(2.3,4.0) <<endl;
}
