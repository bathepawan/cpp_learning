#include<iostream>
#include<fstream>

using namespace std;

struct Person{
	int age;
	char name[30];
	int height;
};

int main(){

	Person p,np;
	p.age = 25;
	strcpy(p.name,"Pawan Bathe");
	p.height=6;

	ofstream fout("file.bin",ios::out | ios::binary);
	if(fout)
	{
	fout.write((char *)&p,sizeof(struct Person));
	fout.close();
	}
	else
	{
		cout<<"Error, Can't open for writing"<<endl;
		return 1;
	}

	ifstream fin("file.bin",ios::in | ios::binary);
	if(fin)
	{
	fin.read((char *)&np,sizeof(struct Person));
	fin.close();
	}else{
		cout<<"Error, Can not open for reading"<<endl;
		return 1;
	}
	cout<<"Name: "<<np.name<<endl;
	cout<<"Age: "<<np.age<<endl;
	cout<<"Height: "<<np.height<<endl;

	return 0;


}
