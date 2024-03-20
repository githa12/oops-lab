interface A {
    default void display() {
        System.out.println("A");
    }
}

interface B extends A {
    default void display() {
        System.out.println("B");
    }
}

interface C extends A {
    default void display() {
        System.out.println("C");
    }
}

class D implements B, C {
    public static void main(String[] args) {
        D d = new D();
        d.display(); // This will cause a compile-time error due to the diamond problem
    }
}



