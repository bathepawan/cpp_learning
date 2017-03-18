#include<iostream>

using namespace std;

class A
{
int a;

public:
	A(int i)
	{
		a=i;
	}
	void printA()
	{
	cout << "A = "<< a << endl;	
	}
};

class B
{
int b,c;

public:
	B(int i,int j)
	{
	b=i;
	c=j;
	}
	void printBC()
	{
	cout << "B = "<< b << "\t " << "C = "<< c << endl; 
	}
};

int main()
{
int i;
A arr[10]={1,2,3,4,5,6,7,8,9,10};
B barr[3]={
B(1,1),
B(2,2),
B(3,3)
};
for(i=0;i<10;i++)
{
	arr[i].printA();
}

for(i=0;i<3;i++)
	barr[i].printBC();
}







