// (Instruction: open-book; open-note; unlimited attempts)

// Write your code in the underlined section below. 

// Step 1: Create a Movie class. A Movie has two instance variables/fields: a title (a String) and a releaseYear (an int). It has a constructor that initializes the title and the releaseYear. It has a toString() method that returns a String containing the title and releaseYear, separated by commas. You’ll have to fill in what’s missing (the two instance variables, code for the Constructor, and code for toString()). 

// Step 2: Create a HorrorMovie class, that inherits from the Movie class. The HorrorMovie class adds two fields: a monster (a String) and a bodyCount (an int). It also has a Constructor that initializes the title, the releaseYear, the monster, and the bodyCount. It also has a toString() method that returns a String containing the title, releaseYear, the monster, and the bodyCount, separated by commas. 


// Movie class  
class Movie {  
    // Step 1: define two fields here: title, releaseYear  
    String title;
    int releaseYear;

    // t: title  
    // y: releaseYear  
    Movie(String t, int y) {  
        this.title = t;
        this.releaseYear = y;

    } // end Constructor  

    public String toString() {  
        return this.title + " " + this.releaseYear;
    } // end toString()  

} // end Movie class  


// HorrorMovie class  
class HorrorMovie extends Movie {  

    // Step 2: define two fields here: monster, bodyCount  

   String monster;
   int bodyCount;

    // Constructor:  
    // t: title  
    // y: releaseYear  
    // m: monster  
    // bc: bodyCount  
    HorrorMovie(String t, int y, String m, int bc) {  
        super(t, y);
        this.monster = m;
        this.bodyCount = bc;
    } // end Constructor  

    public String toString() {  
        return super.toString() + " " + monster + " " + bodyCount;
    } // end toString()  

} // end HorrorMovie class 

