
#include<iostream>
using namespace std;
class Calc;
class Maths{
	private:
		int a,b;
	public:
		Maths(int a,int b){
			this->a=a;
			this->b=b;
		}
		friend class Calc;
};
class Calc{
	 private:
	 	int x,y;
	 public:
	 	Calc(){
	 		x=20;
	 		y=80;
		 }
		void add(Maths& m1){//definition
			int c=m1.a + m1.b+x +y;
			cout<<"\n add="<<c;
		}
		 
};

main(){
	Maths m1(23,45);
    Calc c1;
	c1.add(m1);	
}
