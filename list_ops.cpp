#include<iostream>
#include<cstdlib>
#include<list>

using namespace std;

int main(){

	list<int> L; // vector needs initial size for initialization
	list<int> L2;
	list<int>::iterator p;
	int i;
	for(i=0;i<10;i++)
		L.push_back(rand());
	p = L.begin();

	while(p!=L.end())
		{
			cout<<*p<<endl;
			p++;
		}

	cout<<"After"<<endl;
	
	for(i=0;i<10;i++)
		L2.push_front(rand());

	L.merge(L2);
	if(L2.empty())
		cout<<"L2 is empty now"<<endl;
	L.sort();
	p = L.begin();
	while(p!=L.end())
	{
	cout<<*p<<endl;
	p++;
	}
return 0;
}

