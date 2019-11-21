package modelo;

public abstract class Animal {

	// Atributos -> Variaveis -> Caracteristicas
	public String nome;
	public String raca;
	public Double comprimento;
	public Double peso;
	
	public abstract void grunir();
	

	// Comportamentos -> m�todos -> fun��es
	public void acordar() {
		System.out.println("Animal acordando...");
	}

	public void dormir() {
		System.out.println("Animal dormindo...");
	}

	public void comer() {
		System.out.println("Animal comendo...");
	}

	public void locomover() {
		System.out.println("Animal andando...");

	}
}
