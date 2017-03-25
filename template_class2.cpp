#include<iostream>

using namespace std;


template <class data> 
class Klass{

	data a;
	public:
	Klass(data i ){ a=i;}
	data squareit(); 
	data cubeit();
	data show(){cout <<squareit()<<endl;}
};

template <class data> 
data Klass<data>::squareit(){return a*a;}
template <class data>
data Klass<data>::cubeit(){return a*a*a;}

int main(){

	Klass<int> k1(20);
	Klass<float> k2(3.4);
	cout << "K1^2 :"<<k1.squareit()<<"\tK1^3:\t"<<k1.cubeit()<<endl;
	cout << "K2 :"<<k2.squareit()<<"\tK2^3:\t"<<k2.cubeit()<<endl;
	return 0;
}


