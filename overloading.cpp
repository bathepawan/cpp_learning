#include<iostream>

using namespace std;

class Shape
{
	int l,b,h;
	public:
	Shape(){l=b=h=0;}
	Shape(int a){
		l=a;
		cout << area(l)<<endl;
	}
	Shape(int a,int b){
		l=a;
		this->b=b;
		cout << area(l,this->b)<<endl;
	}
	Shape(int a,int b, int c){
		l=a;
		this->b=b;
		h=c;
		cout << area(l,this->b,h)<<endl;
	}
	int area(int a){return a*a;}
	int area(int a,int b){return a*b;}
	int area(int a,int b,int c){return 2*(a*b+b*c+c*a);}
};


int main(){
	Shape square(10);
	Shape rect(10,20);
	Shape cuboud(10,20,30);
	return 0;
}
