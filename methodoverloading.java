class A{
    void add(int a,int b){
        System.out.println("sum is "+(a+b));
    }
    void display(){
        System.out.println("Parent class");
    }
}
class MetOvInhe extends A{
    void add(double a,int b){
        System.out.println("sum is "+(a+b));
    }
    void display(){
        System.out.println("Child class");
    }
    public static void main(String args[]){
        MetOvInhe obj=new MetOvInhe();
        obj.add(1.2,2);
        obj.add(1,2);
        obj.display();
    }
}
