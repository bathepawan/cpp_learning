#include <iostream>
using namespace std;

int main()
{
int *arr;
int n;
cout << "Enter Array Size"<<endl;
cin >> n;
arr = new int[n];
int i;
for(i=0;i<n;i++)
arr[i]=i;

for(i=0;i<n;i++)
cout << i <<endl;

delete []arr;
return 0;
}
