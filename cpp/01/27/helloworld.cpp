/*
Class-related stuff goes here. 
Make sure comments are useful and not just fillers.
Switches are really useful if they perform narrow tasks but quickly become messy.
In class we will use many switches for console stuff.
Make sure you always get out of the loops.
Data structures go hand in hand with for loops, specially in this class. 
For class, it's fine to have the int declarations for for loops inside or outside of it.         
Strings will be main character in this class.
A FUNCTION STANDS ALONE
A METHOD IS PART OF A CLASS

// DOING THINGS LIKE string[name.length[0]] IS NO BUENO AND WONT BE ALLOWED
// USE string.at(0) INSTEAD

// QUESTION, WHAT DOES IT MEAN TO FLUSH THE BUFFER?


// WHEN ADDING STRINGS, MAKE SURE EVERYTHING IS TYPE COMPATIBLE

*/

#include <iostream>

// We can use namespaces like this to avoid using "std::" repeatedly.
// Be mindful when using "std" as it may overlap with other namespaces.
// There are places where you can't use namespaces, especially in header files.
// Since these are our files, it's okay to use it as such AS LONG as we have a reason.
using namespace std;

int main() {
    // Use "<<" to pass this string to the output stream.
    // std::cout is part of the standard library, "c" stands for character, out stands for output.
    // std::cout << "Hello World \n"; // This is another way to write the same thing.

    // cout << "Hello World \n";

    // Using "endl" is another way to add a new line and flush the buffer.
    // "\n" waits to see what's coming along, while "endl" does not.
    // "\n" is more efficient than "endl". BE MINDFUL when deciding which one to use.


    /* EXAMPLE OF CODE TO WATCH OUT FOR */
    // double a_height = 5.5, b_height = 6.0;

    // if ( a_height = b_height) { <-- make sure you do not assign lmao
    //     cout << "They are the same height" << endl;
    // }



    // // Strings are classes of C++, not primitives 
    // string firstWord;
    // string secondWord = "world!";
    
    // firstWord = "Hello, ";

    // cout << firstWord << " ";
    // cout << secondWord << endl;


    // // char letter = 'a'; // in C++, '' are used for chars

    // string into = "Hi, ";
    // string name;

    // cout << "What is your name";

    // cin >> name; // READS UP UNTIL FIRST WHITE SPACE
    // // getline(cin, name); // READS THE ENTIRE LINE.

    // cout << into << name + "!" << endl;


    // /// THERE IS A DIFFERENTCE BETWEEN LENGTH AND SIZE, SIZE IS PREFFERD.
    // cout << "your name is " << name.length();
    // cout << "your name is " << name.size();



    int a, b;
    int sum; 

    cout << "Enter the first number";
    cin >> a; // READS THE ENTIRE LINE.

    cout << "Enter the second number";
    cin >> b; // READS THE ENTIRE LINE.

    cout << "Simple addiiton gives you " << a << " + " << b << " = " << a+b << endl;

    

    for (int i = 0; i < a; i++)
    {
        /* code */
        sum++;
    }

    for (int j = 0; j < b; j++)
    {
        /* code */
        sum++;
    }

    cout << sum;





    return 0;
}
