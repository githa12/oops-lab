#include<iostream>
using namespace std;
class A {
    public :
    void display() {
        cout<<"A"<<endl;
    }
};

class B : public A {
   public:
    void display() {
        cout<<"B"<<endl;
    }
};

class C:  public  A {
  public:  void display() {
        cout<<"C"<<endl;
    }
};

class D : public B,public C {
};

int main(){
        D obj;
        obj.B::display();
        obj.C::display(); 
}

