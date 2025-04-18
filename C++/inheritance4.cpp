#include<iostream>
using namespace std;

class B{
	public:
		int b;
		void getB(){
			cout<<"\n Enter B";
			cin>>b;
		}
		
};
class C{
	public:
		int c;
		void getC(){
			cout<<"\n Enter C:";
			cin>>c;
		}
		
};
class D:public B,public C{
	public:
		int d;
		void getD(){
			cout<<"\n enter D";
			cin>>d;
		}
		void addition(){
			cout<<"\n addition="<<b+c+d;
		}
};
main(){
	D d1;
	d1.getB();
	d1.getC();
	d1.getD();
	d1.addition();
}
