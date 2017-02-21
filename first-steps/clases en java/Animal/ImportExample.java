import java.util.Random;

class ImportExample {
	public static void main(String[] args) {
		Random r = new Random(); // DOES NOT COMPILE ?
		System.out.println(r.nextInt(100));
	}
	
}