#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(int a=0, int b=0){
			this->a=a;
			this->b=b;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
		Maths operator+(Maths& m2){
			Maths m3;
			m3.a= a+ m2.a;
			m3.b= b+m2.b;
			return m3;			
		}
};
main(){
	Maths m1(12,45);
	m1.display();
	Maths m2(2,3);
	m2.display();
	Maths m3;
	m3 = m1+m2;
	m3.display();
	
	
}
