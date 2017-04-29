#include<iostream>
#include<vector>
#include<cctype>

using namespace std;


int main()
{
vector<int> v(10);
vector<int>::iterator p;
int i;
p=v.begin();
i=0;
while(p!=v.end())
	{
	*p=i;
	p++;
	i++;
	}

p=v.begin();
while(p!=v.end())
	{
	cout<<*p<<endl;
	p++;
	}

return 0;
}
