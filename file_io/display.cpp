#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[]){

char str[256];
ifstream fin;
if(argc!=2)
{
cout << "usage : Display <filename>"<<endl;
fin.open(__FILE__);
}else
{
fin.open(argv[1]);
}

if(!fin){
cout << "Failed to open file "<<__FILE__<<",for reading.."<<endl;
return 1;
}

while(fin){
fin.getline(str,256);
if(fin) cout << str << endl;
}

fin.close();
return 0;
}
