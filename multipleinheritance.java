interface Mammal {
    void M();
}

interface Rodents {
    void R();
}

class Rats implements Mammal, Rodents {
    public void M() {
        System.out.println("mammals are warm blooded");
    }

    public void R() {
        System.out.println("rodents are small creatures");
    }

    void r() {
        System.out.println("rats belong to rodents of mammals");
    }

    public static void main(String args[]) {
        Rats obj = new Rats();
        obj.M();
        obj.R();
        obj.r();
    }
}




