public class Main {
    public static void main(String[] args) {
        DietPlanner dietPlanner = new DietPlanner();

        FoodType apple = new FoodType("Apple", 95, 0.5, 4.4); // Example food item
        FoodType banana = new FoodType("Banana", 105, 1.3, 3.1); // Example food item

        dietPlanner.addFood(apple);
        dietPlanner.addFood(banana);

        System.out.println("Menu after adding foods:");
        dietPlanner.display();

        dietPlanner.removeFood(apple);

        System.out.println("Menu after removing apple:");
        dietPlanner.display();

        System.out.println("Is menu empty? " + dietPlanner.isEmpty());
    }
}
