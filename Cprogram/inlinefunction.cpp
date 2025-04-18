#include<iostream>
using namespace std;
class Maths{
	private:
		int a,b;
	public:
		Maths(int a,int b){
			this->a=a;
			this->b=b;
		}
	friend void add(Maths);//declaration
};

void add(Maths m1){//definition
	int c=m1.a + m1.b;
	cout<<"\n add="<<c;
}
main(){
	Maths m1(23,45);
	add(m1);//calling
	
}
