//Hierarchial Inheritance
#include<iostream>
using namespace std;
class Ritu{
	public : 
	int age=19;
	string gender ="rfemale";
	int height=178;

	private:
	string phNo="8328789996";

	public:
	string getp(){
		return phNo;}
};
class info1 : public Ritu{
	public:	void display(){
	cout<<"Age: "<<age<<endl;
	cout<<"gender: "<<gender<<endl;
	cout<<"height: "<<height<<endl;
	}
};
class info2 : public Ritu{
	public:
	 string p=getp();
	 void display1(){
	cout<<"phone number: "<<p<<endl;
	 }
};
int main(){
	info1 obj;
	info2 obj1;
	obj.display();
	obj1.display1();
}





