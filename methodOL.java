class MethodOl{
    void add(int a,int b){
        System.out.println("sum is "+(a+b));
    }
    void add(double a,double b){
        System.out.println("sum is "+(a+b));   
    }
    void add(int a,int b,int c){
        System.out.println("sum is "+(a+b+c));
    }
    void add(double a,int b){
        System.out.println("sum is "+(a+b));
    }
    void product(double a,double b,double c){
        System.out.println("product is "+(a*b*c));
    }
     void product(double a,double b){
        System.out.println("product is "+(a*b));
    }
public static void main(String args[]){
    MethodOl obj=new MethodOl();
    obj.product(12341,84);
    obj.product(9,2);
    obj.add(1.2,2);
    obj.add(2,3);
    obj.add(2.1,3.3);
    obj.add(1,2,3);
    obj.add(-1,3);
    obj.add(2,2.2);
}
}

