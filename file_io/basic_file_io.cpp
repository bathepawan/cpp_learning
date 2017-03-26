/*
 * ifstream() open file for reading - file must exists 
 * ofstream() open file for writing
 * fstream() open existing stream for read/write -- this will not create file if not present already
 *
 * */

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char s[10];
	fstream out;
	out.open("testme.txt",ios::out|ios::ate);
	out<<"Testme"<<endl;
	if(out) cout << "Opened for writing"<<endl; else cout << "Not Opened for writing"; 
	out.close();		
	ifstream in("testme.txt");
	in>>s;
	cout << s << endl;
	if(in) cout << "Opened for reading"<<endl; else cout << "Not Opened for reading"; 
	in.close();
	return 0;

}
