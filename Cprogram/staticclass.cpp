#include<iostream>
using namespace std;
float pi=3.14;
class Users{
	public:
		static int objCount;
		Users(){
			objCount++;
			cout<<"\npi="<<::pi;
		}
		static void display(){
			cout<<"\n display method called";
			cout<<"\n count="<<objCount;
		}
};
int Users::objCount=0;
main(){
	Users u1,u2,u3;
	Users::display();
	
}

