#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display()=0;//pure virtual method
};
class Child:public Parent{
	public:
		void display(){
			cout<<"\n Child class method called";
		}
};

main(){
	Child c1;
	Parent* p1;
	p1=&c1;
	p1->display();
	c1.display();
}
