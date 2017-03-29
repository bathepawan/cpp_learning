#include<iostream>
#include<fstream>

using namespace std;
int main(){
char c;
ifstream fin(__FILE__);

fin.ignore(300,'_');

while(fin)
{
	fin.get(c);
	cout << c;
}
return 0;
}
