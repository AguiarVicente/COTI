package execucao;

import modelo.*;

public class Principal4 {
	
	public static void main(String args[]){
		
		Animal a = null;
		
		a  = new Cachorro();
		a.grunir();
		
		a = new Gato();
		a.grunir();
		
		a = new Peixe();
		a.grunir();
		
		
	}

}
