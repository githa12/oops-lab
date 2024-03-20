#include<iostream>
using namespace std;
class Complex{
    private: 
    int real;
    int image;
    public:
    Complex(int r=0,int i=0){
        real=r;
        image=i;
    }
    void result(){
        cout<<real<<"+i"<<"("<<image<<")"<<endl;
    }
    friend Complex operator*(Complex const& c1,Complex const& c2);
    friend Complex operator+(Complex const& c1,Complex const& c2);
    friend Complex operator-(Complex const& c1,Complex const& c2);
    friend Complex operator/(Complex const& c1,Complex const& c2);
};
Complex operator*(Complex const& c1,Complex const& c2){
    return Complex(((c1.real*c2.real)-(c1.image*c2.image)),((c1.real*c2.image)+(c1.image*c2.real)));
}
 Complex operator+(Complex const& c1,Complex const& c2){
    return Complex(c1.real+c2.real,c1.image+c2.image);
 }
 Complex operator-(Complex const& c1,Complex const& c2){
    return Complex(c1.real-c2.real,c1.image-c2.image);
 }
int main(){
    Complex c1(1,2),c2(2,5);
    Complex c3=c1*c2;
    Complex c4=c1+c2;
    Complex c5=c1-c2;
    c3.result();
    c4.result();
    c5.result();
}
