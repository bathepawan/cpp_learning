//NXlnw is gpnnfot we will edit it 
// seekg seek get pointer
// seekp seek put pointer

#include<iostream>
#include<fstream>

using namespace std;

int main(int argc,char *argv[]){
char ch;

fstream f(argv[1],ios::binary|ios::in|ios::out);

f.seekg(atoi(argv[2]));
f.get(ch);
cout <<ch;
f.seekp(atoi(argv[2]));
f.put(ch+1);

return 0;
}
