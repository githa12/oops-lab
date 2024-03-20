//Multilevel inheritance
#include<iostream>
using namespace std;
class Mammal{
	public:
	void M(){
		cout<<"    mammals are warm blooded"<<endl;
	}
};
class Primates : public Mammal{
	public:
	void R(){
		cout<<"    Primates have hands to grab"<<endl;
	}
};
class Humans : public Primates{
	public: void H(){
		cout<<"    Humans belong to primates of mammals"<<endl;
	}
	};
int main(){
		Humans obj;
		obj.M();
		obj.R();
		obj.H();
}

