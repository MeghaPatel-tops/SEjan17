#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void getA(){
			cout<<"\n enter A";
			cin>>a;
		}
};
class B: virtual public A{
	public:
		int b;
		void getB(){
			cout<<"\n Enter B";
			cin>>b;
		}
		
};
class C:virtual public A{
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
			cout<<"\n addition="<<a+b+c+d;
		}
};
main(){
	D d1;
	d1.getA();
	d1.getB();
	d1.getC();
	d1.getD();
	d1.addition();
}
