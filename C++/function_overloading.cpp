#include<iostream>
using namespace std;
class Maths{
	public:
		void add(int x,int y){
			cout<<"\n addition of tow int="<<x+y;
		}
		
		void add(float a,float b,float c){
			float add=a+b+c;
			cout<<"\n addition of three float="<<add;
		}
};
main(){
	Maths m1;
	m1.add(2.1,3.4,8.9);
	m1.add(100,889);
}
