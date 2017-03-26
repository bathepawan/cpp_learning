#include<iostream>
#include<fstream>

using namespace std;


int main(){
	char s[30];
	int i;
	ifstream in("file.txt");
	if(in)
	{
		in>>s;
		in>>i;
		cout<<"From File: "<< endl;
		cout << "String :"<<s<<endl;
		cout << "Number :"<<i<<endl;
	}else
	{
	cout<<"Not opened :("<<endl;
	}
	in.close();
	return 0;
}


