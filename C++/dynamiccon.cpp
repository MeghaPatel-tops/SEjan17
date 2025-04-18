#include<iostream>
using namespace std;
class Maths{
	public:
		int x,y,m,n;
		Maths(int a, int b){
			x=a;
			y=b;
		}
		Maths(int x,int y,int m,int n=0){
			x=x;
			y=y;
			m=m;
			n=n;
		}
	
		void printData(){
			cout<<"\n x="<<x<<"\t y="<<y;
		}
};
main(){
	Maths* m1 = new Maths(12,34);
	Maths m2(1,2,3);
	m1->printData();
	
	cout<<"\n m1=size"<<sizeof(m1);
	cout<<"\n m2=size"<<sizeof(m2);

	
	
}
