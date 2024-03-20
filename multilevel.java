//multilevel
class Mammal{
	void M(){
		System.out.println("    mammals are warm blooded");
	}
}
class Primates extends  Mammal{
	void R(){
		System.out.println("    Primates have hands to grab");
	}
}
class Humans extends Primates{
	 void H(){
		System.out.println("    Humans belong to primates of mammals");
	}
	public static void main(String args[]){
		Humans obj=new Humans();
		obj.M();
		obj.R();
		obj.H();
}
	}
