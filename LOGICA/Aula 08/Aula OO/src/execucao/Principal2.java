package execucao;

import modelo.Cachorro;

public class Principal2 {
	
	// Método de execução
	public static void main(String args[]){
		
		// Cachorro -> Tipo de dado (Referencia)
		// c1 -> instancia de um objeto da classe Cachorro
		// new -> Alocação de memoria
		// Cachorro() -> Construtor
		Cachorro c1 = new Cachorro();
		
		// Entrada de dados
		c1.nome = "Bob";
		c1.raca = "Vira Lata";
		c1.comprimento = 30.0;
		c1.peso = 15.0;
		
		// c2 -> instancia de um objeto da classe Cachorro
		Cachorro c2 = new Cachorro();
		// Entrada de dados
		c2.nome = "Bob Jr";
		c2.raca = "Vira Lata";
		c2.comprimento = 40.0;
		c2.peso = 60.0;
		
		// Saida de dados
		System.out.println("Cachorro UM");
		System.out.println("Nome : " + c1.nome);
		System.out.println("Raça : " + c1.raca);
		System.out.println("Comprimento : " + c1.comprimento);
		System.out.println("Peso : " + c1.peso);
		c1.acordar();
		c1.dormir();
		c1.comer();
	
		System.out.println("Cachorro DOIS");
		System.out.println("Nome : " + c2.nome);
		System.out.println("Raça : " + c2.raca);
		System.out.println("Comprimento : " + c2.comprimento);
		System.out.println("Peso : " + c2.peso);
		c2.acordar();
		c2.dormir();
		c2.comer();
		
	}

}
