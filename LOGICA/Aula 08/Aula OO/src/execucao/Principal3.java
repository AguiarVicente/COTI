package execucao;

import modelo.*;

public class Principal3 {
	
	public static void main(String args[]){
		
		Cachorro c1 = new Cachorro();
		
		System.out.println("Cachorro");
		c1.acordar();
		c1.dormir();
		c1.locomover();
		c1.comer();
		c1.cavar();
		
		Gato g = new Gato();
		System.out.println("Gato");
		g.acordar();
		g.comer();
		g.locomover();
		g.dormir();
		
		
		Peixe p = new Peixe();
		System.out.println("Peixe");
		p.acordar();
		p.comer();
		p.locomover();
		p.dormir();
		
	}

}
