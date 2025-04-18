#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(int a){
			cout<<"\n parent class constructor a="<<a;
		}
};
class Child:public Parent{
	public:
		Child(int b,int a):Parent(a){
			//super(a);//java
			cout<<"\n Child class constructor b="<<b;
		}
};
main(){
	Child c1(12,34);
}
