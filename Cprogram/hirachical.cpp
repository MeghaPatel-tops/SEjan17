#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getA(){
			cout<<"\n enter a";
			cin>>a;
		}
};
class B:virtual public A{
	public:
		int b;
		void getb(){
			cout<<"\n enter b";
			cin>>b;
		}
	
};
class C: virtual public A{
	public:
		int c;
			void getc(){
			cout<<"\n enter c";
			cin>>c;
		}
		
};
class D: public B,public C{
	public:
		int d;
		void getD(){
			cout<<"\n enter d";
			cin>>d;
		}
		void addition(){
			cout<<"\n addition="<<(a+b+c+d);
		}
};

main(){
	D d1;
	d1.getA();
	d1.getb();
	d1.getc();
	d1.getD();
	d1.addition();
}
