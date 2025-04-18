#include<iostream>
using namespace std;
class Parent{
	int a,b;
	public:
	Parent(int a,int b){
		this->a=a;
		this->b=b;
	}
	friend class Child;
};
class Child {
	public:
		void add(Parent& p1){
			cout<<"\n add="<<p1.a+p1.b;
		}
};
main(){
	Parent p1(10,20);
	Child c1;
	c1.add(p1);
}
