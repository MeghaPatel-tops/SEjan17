#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"\n Parent class contructor called";
		}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"\n Child class constructor called";
		}
};
main(){
	Child c1;
}
