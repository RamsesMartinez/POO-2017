  /**
  * TODO: Convert this code to POO
  */
class Chicken {
  // // Don't do this plox :v 
  // int numberEggs = 0; // Initialize on line
  // mother = new Swan();
  // public Chick() {
  //   name = "Duck";
  // }

  private String name = "NOMbre XD";

  {
     System.out.println("Setting field");
  }

  public Chicken() {
    name = "Tiny";
    System.out.println("Setting Constructor");
  }

  public static void main (String[] args) {
    Chick chicken = new Chick();
    System.out.println(chicken.name);
  }

}