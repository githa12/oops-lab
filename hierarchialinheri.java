//Hierarchical inheritance
class Shiva{
	int age=19;
	String gender ="male";
	int height=178;

	protected String phNo="8328307436";

	public String getp(){
		return phNo;}
}
class Info1 extends  Shiva{
	public	void display(){
	System.out.println("Age: "+age);
	System.out.println("gender: "+gender);
	System.out.println("height: "+height);
	}
}
class Info2 extends Shiva{
	 String p=getp();
	 void display1(){
	System.out.println("phone number: "+p);
	 }
public static void main(String args[]){
	Info1 obj=new Info1();
	Info2 obj1=new Info2();
	obj.display();
	obj1.display1();
}
}

