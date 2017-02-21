class Operadores {
	public static void main(String[] args) {
		int x = 6;
		boolean y = (x>6) || ( x> 10);
		System.out.println("hola: " + y);

		boolean z = true;

		if (z) {
			System.out.println("EXITO!!");
		}

		int j;
		for (j = 0; j < 10 ; j++) {
			System.out.println(j);
		}

		final String nombres[] =  new String[2];
		nombres[0] = "Paquito";
		nombres[1] = "Juanito";

		for (String nombre : nombres) {
			System.out.println(nombre);
		}
	}
}
