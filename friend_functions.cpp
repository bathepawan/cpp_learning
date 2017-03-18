#include <iostream>

using namespace std;
class ClassA;
class ClassB
{
private:
        int b;
public:
        ClassB(int b);
        void printB();
        void friendofAfromB(ClassA obja);
};


class ClassA
{
private:
	int a;
public:
	ClassA(int a);
	void printA();
	friend void friendofA(ClassA obja);
	void friend ClassB::friendofAfromB(ClassA obja);
};

ClassA::ClassA(int a)
{
	this->a = a;	
}
void ClassA::printA()
{
	cout << "A= " <<a << endl;
}

ClassB::ClassB(int b)
{
	this->b = b;
}

void ClassB::printB()
{
	cout << "B=" << b << endl;
}

void ClassB::friendofAfromB(ClassA obja)
{
	cout << "Printing value of A = " << obja.a << "from friend function from B" << endl;

}

void friendofA(ClassA obja)
{
	cout << "Printing value of A =" << obja.a << "from friend function outside of class" << endl;
}


int main()
{
ClassA a(10);
ClassB b(20);

a.printA();
b.printB();
friendofA(a);
b.friendofAfromB(a);
}


