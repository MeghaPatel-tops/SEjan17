#include<iostream>
using namespace std;
	int i;
class Student{
	public:
	//data member
	int num,fact;

	//member function

	void getData(){
		cout<<"\n Enter num ";
		cin>>num;
	}
	int 
	(int num){
		if(num==1){
			return 1;
		}
		else{
			fact =num*showData(num-1);
		}
		return fact;
	}
};
main(){

Student s1;
s1.getData();
cout<<"\n"<<s1.showData(s1.num);

}
