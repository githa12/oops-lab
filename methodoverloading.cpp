#include<iostream>
using namespace std;
class MethodOl{
    public:
    void add(int a,int b){
        cout<<"Sum is "<<(a+b)<<endl;
    }
    void add(double a,double b){
         cout<<"Sum is "<<(a+b)<<endl;
    }
    void add(int a,int b,int c){
         cout<<"Sum is "<<(a+b+c)<<endl;
    }
    void add(double a,int b){
          cout<<"Sum is "<<(a+b)<<endl;
    }
    void product(double a,double b,double c){
        cout<<"product is "<<(a*b*c)<<endl;
    }
     void product(double a,double b){
        cout<<"product is "<<(a*b)<<endl;
    }
};
int main(){
    MethodOl obj;
    obj.product(12341,84);
    obj.product(9,2);
    obj.add(1.2,2);
    obj.add(2,3);
    obj.add(2.1,3.3);
    obj.add(1,2,3);
    obj.add(-1,3);
    return 0;
}


