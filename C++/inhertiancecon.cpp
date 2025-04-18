#include<iostream>
using namespace std;
class Parent{
	public:
		int x;
		Parent(int y){
			x=y;
			cout<<"\n Parent class contructor called";
			cout<<"\n y="<<x;
		}
};
class Child:public Parent{
	public:
		int m;
		Child(int n,int y):Parent(y){
			m=n;
			cout<<"\n Child class constructor called";
			cout<<"\n m="<<m;
		}
};
main(){
	Child c1(10,20);
}
