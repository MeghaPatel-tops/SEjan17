#include<iostream>
using namespace std;
int x=20;
class Test{
	public:
		Test(){
			/*
			It is used to access the hidden variables, global variables,
			 class members, and members of the nested classes.*/
			cout<<"\n global varibale="<<::x;
		}
		void display();
};
/*2.You can place class member functions outside
 the class using the scope resolution operator.*/
void Test::display(){
	cout<<"\n method created outside the class";
}
main(){
	Test t1;
	t1.display();
}
