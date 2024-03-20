#include<iostream>
using namespace std;
class Animal{
    public:
    void population1(){
        cout<<"Animal population is 20 billion"<<endl;
    }
};
class Pig : public Animal{
    public:
    void population2(){
        cout<<"population of pig is 1 billion"<<endl;
    }
};
int main(){
    Pig obj;
    obj.population2();
    obj.population1();
    return 0;
}
