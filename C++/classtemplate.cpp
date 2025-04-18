#include<iostream>
using namespace std;
template <class T>
class Genral{
	public :
		T a[5],temp;
		void getArray(){
			for(int i=0;i<5;i++){
				cout<<"\n Enter a["<<i<<"]";
				cin>>a[i];
			}
		}
		void sortArray(){

			for(int i =0;i<5;i++){
				for(int j=i+1;j<5;j++){
					if(a[i]>a[j]){
						temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		void display(){
			for(int i=0;i<5;i++){
				cout<<"\ni"<<i<<"="<<a[i];
			}
		}
};
main(){
	Genral<int> g1;
	g1.getArray();
	g1.sortArray();
	g1.display();
	
	Genral<char> g2;
	g2.getArray();
	g2.sortArray();
	g2.display();
}
