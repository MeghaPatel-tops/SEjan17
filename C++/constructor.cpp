#include<iostream>
using namespace std;
class Maths{
	public:
		Maths(){//Simple(Default) Constructor
			cout<<"\n default constructor called";
		}
		~Maths(){//destructor
			cout<<"\n destructor called";
		}
		Maths(int x,int y){//Parameterized Constructor
			cout<<"\nParameterized Constructor called";
			cout<<"\nx="<<x<<"\ny="<<y;
		}
};
main(){
	Maths m2(12,34);
	Maths m1;
	Maths m3(1,2);
}
