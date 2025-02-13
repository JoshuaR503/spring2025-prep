import java.util.Set;

public class FoodType {

    String name;
    double calories;
    double protein;
    double fiber;

    public FoodType(String n, double c, double p, double f) {
        this.name = n;
        this.calories = c;
        this.protein = p;
        this.fiber = f;
    }

    public String toString() {
        return "Type of food: " + name + ", Calories per serving: " + calories + ", Protein per serving: " + protein + "g, Fiber per serving: " + fiber + "g";
    }

}


