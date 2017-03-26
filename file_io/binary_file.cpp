#include<iostream>
#include<fstream>

using namespace std;


int main(){
	ofstream bout("binaryfile.bin",ios::out| ios::binary);

	if(bout)
	{
	for(int i=0;i<=255;i++) bout.put((char)i);
	}else
	{
	cout<<"Meh, couldn't open file for writing"<<endl;
	}

	bout.close();

	ifstream bin("binaryfile.bin",ios::in | ios::binary);
	char ch;
	if(bin){
		while(bin.get(ch))
			cout<<ch;
	}else
	{
	cout<<"Oh snap!, couldn't open file for reading.."<<endl;
	}
	bin.close();
	return 0;
}
