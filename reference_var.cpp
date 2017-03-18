#include<iostream>
using namespace std;

void swap(int &a,int &b);

int main()
{
	int i=2,j=3;
	cout << "Original i,j="<<i<<","<<j<<endl;
	swap(i,j);
	cout << "New i,j="<<i<<","<<j<<endl;
	return 0;
}

void swap(int &a,int &b)
{
int t;
t = a;
a = b;
b = t;
}
