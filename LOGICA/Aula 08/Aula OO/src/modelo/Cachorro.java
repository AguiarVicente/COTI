package modelo;

public class Cachorro extends Animal{

	public void cavar(){
		System.out.println("Cachorro cavando...");
		
	}

	@Override
	public void grunir() {
		System.out.println("Cachorro latindo...");
	}
	
	

}
