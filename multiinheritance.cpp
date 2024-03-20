//Multiple Inheritance

#include<iostream>
using namespace std;
class Mammal{
	public:
	void M(){
		cout<<"mammals are warm blooded"<<endl;
	}
};
class Rodents{
	public:
	void R(){
		cout<<"rodents are small creatures"<<endl;
	}
};
class Rats : public Mammal , public Rodents{
	public: void r(){
		cout<<"rats belong to rodents of mammals"<<endl;
	}
	};
int main(){
		Rats obj;
		obj.M();
		obj.R();
		obj.r();
}

