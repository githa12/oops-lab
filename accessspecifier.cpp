#include<iostream>
using namespace std;
class AccessSpecifierDemo{
    private: int priVar;
    protected: int proVar;
    public: int pubVar;
    public: void setVar(int priValue,int proValue, int pubValue){
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue;
    }
    public:
     int getPubVar(){
        return pubVar;
    }
    int getPriVar(){
        return priVar;
    }
    int getProVar(){
        return proVar;
    }
};
int main(){
    AccessSpecifierDemo obj;
    obj.setVar(1,2,3);
    cout<<"public variable is :"<<obj.getPubVar()<<endl;
    cout<<"private value is :"<<obj.getPriVar()<<endl;
    cout<<"protected value is :"<<obj.getProVar()<<endl;
    return 0;
}

