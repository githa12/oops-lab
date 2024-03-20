//Hybrid Inheritance
#include<iostream>
#define pi 3.14
using namespace std;
class Radius{
	public:
	float r=10;
};
class Circle : public Radius{
	public:
	void R(){
		cout<<"    Area of circle is "<<pi*r*r<<endl;
	}
};
class SemiCircle : public Radius{
	public: void H(){
		cout<<"    Area of semi circle is "<<0.5*pi*r*r<<endl;
	}
	};
class Area : public Circle, public SemiCircle{
};
int main(){
		Area obj;
		obj.R();
		obj.H();
}


