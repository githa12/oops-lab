import java.util.Scanner;
class Animal{
    static void population1(){
        System.out.println("Animal population is 20 billion");
    }
}
class Pig extends Animal{
    static void population2(){
        System.out.println("population of pig is 1 billion");
    }

public static void main(String args[]){
    Pig obj=new Pig();
    obj.population1();
    obj.population2();
}
}
