//Multiple inheritance
class Mammal{
	void M(){
		System.out.println("mammals are warm blooded");
	}
}
class Rodents{
	void R(){
		System.out.println("rodents are small creatures");
	}
}
class Rats extends Mammal , Rodents{
	 void r(){
		System.out.println("rats belong to rodents of mammals");
	}
	public static void main(String args[]){
		Rats obj=new Rats();
		obj.M();
		obj.R();
		obj.r();
}
	}



