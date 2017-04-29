 // Understanding end().
#include <iostream>
#include <list>
#include<vector>
using namespace std;
int main() {
vector<int> v;
list<int> l;
int i;
for(i=0; i<10; i++)
{
	l.push_back(i);
	v.push_back(i);
}

//cout<<l[8]<<endl;//Sequential access , no random access allowed
cout<<v[8]<<endl;
return 0;

}
