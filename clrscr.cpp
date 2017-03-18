#include<iostream>
using namespace std;
void clrscr(int i=50);
int main(int argc,char **argv){
	if(argv[1])
		clrscr(atoi(argv[1]));
	else
		clrscr();
	return 0;
}

void clrscr(int i){
	for(int j=0;j<i;j++)
		cout <<endl;
}


