#include<iostream>
using namespace std;
class Country{
    public:
        float population=5.6;
        float getP(){
            return population;
        }
    private:
        float defenseBudget=100.9;
    public:
        float getValue(){
            return defenseBudget;
        }
    protected:
        float armedForces=0.5;
    public:
    float getPro(){
        return armedForces;
    }
};
class Info : public Country{
    public:
    float a=armedForces;
    float b=getValue();


};
class Info1 : protected Country{
    public:
    float c=population;
    float d=armedForces;
    float e=getValue();
};
class Info2 : private Country{
    public:
    float f=getP();
    float g=getPro();
    float h=getValue();

};
int main(){
    Info obj;
    cout<<"public inheritaance"<<endl;
    cout<<"population of country is: "<<obj.population<<" billions"<<endl;
    cout<<"the defense budget is: "<<obj.a<<" billions"<<endl;
    cout<<"The no of armed forces is: "<<obj.b<<" billions"<<endl<<endl;
    Info1 obj2;
    cout<<"protected inheritance"<<endl;
    cout<<"population of country is: "<<obj2.c<<" billions"<<endl;
    cout<<"the defense budget is: "<<obj2.e<<" billions"<<endl;
    cout<<"The no of armed forces is: "<<obj2.d<<" billions"<<endl<<endl;
    Info2 obj3;
    cout<<"private inheritance"<<endl;
    cout<<"population of country is: "<<obj3.f<<" billions"<<endl;
    cout<<"the defense budget is: "<<obj3.h<<" billions"<<endl;
    cout<<"The no of armed forces is: "<<obj3.g<<" billions"<<endl;
}



