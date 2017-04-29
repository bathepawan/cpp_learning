#include<iostream>
#include<vector>
#include<cctype>

using namespace std;

int main(){
vector <int> v1(5);
vector <int> v2(5);
int i;

vector<int>::iterator p;

p=v1.begin();
i=0;
while(p!=v1.end())
	{
		*p=i;
		p++;
		i++;
	}

cout<<"Initial :"<<endl;
p=v1.begin();
while(p!=v1.end())
{
cout<<*p<<endl;
p++;
}
cout<<"After Insertion:"<<endl;
p=v1.begin();
p=p+2;
v1.insert(p,10,i);
p=v1.begin();
while(p!=v1.end())
	{
	cout<<*p<<endl;
	p++;
	}

p=v1.begin();
p=p+2;
v1.erase(p,p+10);
p=v1.begin();
cout<<"After Removal:"<<endl;
while(p!=v1.end())
{
cout<<*p<<endl;
p++;
}

return 0;
}
