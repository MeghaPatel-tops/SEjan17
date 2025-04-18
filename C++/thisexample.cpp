#include<iostream>
#include<string.h>
using namespace std;
class User{
	public:
		char name[20];
		char email[30];
		User(char name[20],char email[30]){
			strcpy(this->email,email);
			strcpy(this->name,name);
		}
		void display(){
				cout<<"\n email="<<email;
				cout<<"\n name="<<name;
		}
};
main(){
	User u1("megha","m@gmail.com");
	u1.display();
	User u2("test","test@gmail.com");
	u2.display();
	
}
