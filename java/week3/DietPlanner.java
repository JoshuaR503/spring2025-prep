import java.util.Arrays;


public class DietPlanner {

    private ArrayBag<FoodType> menu;

    public DietPlanner() {
        this.menu = new ArrayBag<FoodType>();
    }

    public void addFood(FoodType food) {
        menu.add(food);
    }

    public void removeFood(FoodType food) {
        menu.remove(food);
    }

    public boolean isEmpty() {
        return menu.isEmpty();
    }

    public ArrayBag<FoodType> getMenu() {
        return menu;
    }

    public void display() {
        FoodType[] foods = menu.toArray();
        System.out.println(Arrays.toString(foods));
    }
}