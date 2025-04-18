#include<iostream>
using namespace std;
//class child : public parent
class Category{
	public:
		int catid;
		char catname[20];
		void getCategory(){
			cout<<"\n Enter Category:";
			cin>>catid>>catname;
		}
};
class Product : public Category{
	public:
		int pid,price;
		char pname[30];
		void getProduct(){
			cout<<"\n Enter pid pname price";
			cin>>pid>>pname>>price;
		}
		void Show(){
			cout<<"\n catid="<<catid<<"\tpid="<<pid;
			cout<<"\n product name="<<pname;
			cout<<"\n price="<<price;
			cout<<"\n category="<<catname;
		}
};
main(){
	Product p1;
	p1.getCategory();
	p1.getProduct();
	p1.Show();
}
