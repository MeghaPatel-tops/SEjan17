#include<iostream>
using namespace std;
//class parent : public grandparent
//class child  : public parentSubcategory
class Category{
	public:
		int catid;
		char catname[20];
		void getCategory(){
			cout<<"\n Enter Category:";
			cin>>catid>>catname;
		}
};
class Subcategory : public Category{
	public:
		int subcatid;
		char subcatname[20];
		void getSubCategory(){
			cout<<"\n Enter Sub Category:";
			cin>>subcatid>>subcatname;
		}
};
class Product : public Subcategory{
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
			cout<<"\n sub cateory="<<subcatname;
		}
};
main(){
	Product p1;
	p1.getCategory();
	p1.getSubCategory();
	p1.getProduct();
	p1.Show();
}
