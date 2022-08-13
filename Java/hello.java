class HelloWorld {
  public static void main(String[] args) {
    String hello = "Hi Mom";
    Coffee cafe = new Coffee(3);
    int price = cafe.getPrice();
    System.out.println(hello);
    System.out.println(price); // ? per qué dona 0
  }
  public static String sayHi(){
    return "Hi Mom!";
  }
}