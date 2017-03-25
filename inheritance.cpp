#include<iostream>

using namespace std;


class BA{
	protected:
		int pa;
	public:
		int pb;
		void set(int i,int j){pa=i;pb=j;};
		void show(){cout << pa <<",  "<< pb <<endl;}
};

class BB{
	protected:
		int ba;
	public:
		int bb;
		void set(int i,int j){ba=i;bb=j;}
		void showb(){
			cout <<ba<<",	"<<bb<<endl;
		}

};

class BC{
	protected:
		int ca;
	public:
		int cb;
		void set(int i,int j){ca=i;cb=j;}
		void showc(){cout << ca<<",	"<<cb<<endl;};
};

class DA: public BA,protected BB,private BC{

	public:
		DA(){}
		void setd(){pa=pb=ba=bb=ca=cb=10; }
		void showd(){
			cout << pa << pb << endl;
			cout << ba << bb << endl;
			cout << ca << cb << endl;
		}

};

int main(){

	BA a;
	a.set(2,3);
	a.show();
	BB b;
	b.set(4,5);
	b.showb();
	BC c;
	c.set(6,7);
	c.showc();
	DA d;
	d.setd();
	d.showd();
}
