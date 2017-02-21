public class ProbadorAnimal {
    public static void main(String[] args) {
        Animal perro = new Animal();

        if (args.length == 0)
            perro.setName("Mijosh");
        else
            perro.setName(args[0]);

        System.out.println(perro.getName());

    }
}