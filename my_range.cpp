#include<iostream>
using namespace std;
namespace range{

int MAX,MIN;

class MyClass{
	int i;
	public:
		MyClass(int a){i=a;}
		void test(){
			if(i>MIN && i<MAX)
			     cout <<i<<" is in range "<<MIN<<":"<<MAX<<endl;
			else
				cout <<i<<" is out of range "<<MIN<<":"<<MAX<<endl;
		}
		
};
}