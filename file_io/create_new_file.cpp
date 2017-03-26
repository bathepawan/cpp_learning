#include<iostream>
#include<fstream>

using namespace std;


int main(){

	ofstream out("file.txt");
	if(out)
	{
	out<<"Hello"<<endl;
	out<<"1"<<endl;
	}else
	{
	cout<<"Not opened :("<<endl;
	}
	return 0;
}


