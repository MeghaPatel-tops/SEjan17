#include<iostream>
using namespace std;
class Maths{
	private:
		int a,b;
	public:	
		Maths(){
			a=10;
			b=20;
		}
		friend void get(Maths);
};
void get(Maths m1){
	cout<<"\n addition ="<<m1.a+m1.b;
}
main(){
	Maths m1;
	get(m1);
}
