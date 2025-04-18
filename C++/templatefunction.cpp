#include<iostream>
using namespace std;
template <typename T>
T  addition( T a, T b){
	T c;
	c=a+b;
	return c;
}
main(){
	cout<<"\n addition="<<addition<int>(12,34);
	cout<<"\n addition="<<addition<float>(1.9,34);
}
