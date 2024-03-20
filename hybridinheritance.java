//hybrid inheritance
class MVGR{
    void M(){
        System.out.println("    MVGR offers BTech  MBA");
    }
}
class Btech extends MVGR{
       void B(){
        System.out.println("    There are 1200 students in BTech ");
    }
}
class MBA extends MVGR{
   void M(){
        System.out.println("    There are 80 students in MBA");
    }
}
class CSE extends Btech{
       void C(){
        System.out.println("    Ther are 200 students in CSE");
    }
    public static void main(String args[]){
        CSE obj=new CSE();
        MBA obj1=new MBA();
        obj.B();
        obj.C();
        obj1.M();
    }
}

