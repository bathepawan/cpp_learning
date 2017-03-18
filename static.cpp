#include <iostream>

using namespace std;

class A
{
	static int a;
public:
	A()
	{
	a++;
	cout << "Created one object; Current count: " << a << endl;
	}
	~A()
	{
	a--;
	cout << "Destroyed one object; Current count: " << a << endl;
	}
};

int A::a;

int main()
{

A a,b,c;
{
A c,d,e;
}
{
A f;
}

A g;
return 0;
}

