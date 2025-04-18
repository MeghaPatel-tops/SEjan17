#include<iostream>
using namespace std;
class Maths{
	public:
		int x,y;
		Maths(int a, int b){
			x=a;
			y=b;
		}
		Maths(const Maths& m1){
			//m2
			x=m1.x;
			y=m1.y;
		}
		void printData(){
			cout<<"\n x="<<x<<"\t y="<<y;
		}
};
main(){
	Maths m1(2,3);
	Maths m2=m1;
	m1.printData();
	m2.printData();
	
	
}
