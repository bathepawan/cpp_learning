#include<iostream>

using namespace std;
int sum(int,int);
int sum(int,int,int);
int main()
{
int a,b,c;
a = 5;
b = 5;
c = 5;
cout << sum(a,b) << endl;
cout << sum(a,b,c) << endl;
return 0;
}

int sum(int x, int y)
{
return x+y;
}

int sum(int x, int y, int z)
{
return x+y+z;
}
