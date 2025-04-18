#include<iostream>
#include<fstream>
using namespace std;
main(){
	fstream f1;
	char data[20],ch;
	f1.open("cppdata.txt",ios::app);
	f1<<"\nhello world";
	f1.close();
	
	f1.open("cppdata.txt",ios::in);
   	while(!f1.eof()){
   		ch=f1.get();
   		cout<<ch;
	}
	f1.close();
}
