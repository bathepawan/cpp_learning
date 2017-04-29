#include<iostream>
#include<vector>
#include<cctype>

using namespace std;

int main(){

vector <int> v(10);
int i;
for(i=0;i<10;i++)
	v[i]=i+1;

for(i=0;i<v.size();i++)
	cout<<v[i]<<"\t";

cout<<endl;
for(i=0;i<12||i<v.size();i++)
	v.push_back(i+10+1);

for(i=0;i<v.size();i++)
	cout<<v[i]<<"\t";
cout<<endl;
return 0;
}
