## C Programming Language

The C programming language was first released in 1972, making it one of the oldest still used today. All modern operating systems are implemented with C code, which means that the C language powers almost every technological experience we have. 

C has been around for quite some time and it is one of the foundational languages of computer science. It is also common in embedded systems, which are smaller computing units that control things like home appliances, lighting controllers, and other small physical devices.

### Strings and Quotes

All strings must be surrounded by double quotes.

In C, double quotes and single quotes are used differently:

- **Double Quotes (")**: Used for string literals. A string is a sequence of characters ending with a null character (`\0`). For example, `"Hello"` is a string.
- **Single Quotes (')**: Used for character literals. A character is a single character. For example, `'A'` is a character.

### Functions and Methods

In C, the term “function” is used, not “method.” A function is a block of code that performs a specific task. Methods are functions that are associated with objects in object-oriented languages like C++ or Java. In C, `main` is a function, not a method.

### Variable Naming Rules

C does not allow you to use just any name for a variable; there are some restrictions:

- Names can be composed of upper and lower case letters, numbers, and underscores.
- The first character must be a letter (upper or lower case).
- No keywords are allowed as the full name (e.g., `int` is not allowed but `int_count` would work).

### Data Types

| Type   | Description                        | Range/Precision                        |
|--------|------------------------------------|----------------------------------------|
| `int`  | A whole number                     | -2,147,483,648 to 2,147,483,647        |
| `float`| A number with possible decimals    | 6 decimal places                       |
| `double`| A number with possible decimals   | 15 decimal places                      |
| `char` | Stores one character (letter/number)| A single character                     |

### Format Specifiers

| Symbol | Type            |
|--------|-----------------|
| `%d` or `%i` | `int`     |
| `%f`         | `double` or `float` |
| `%c`         | `char`    |

### Float vs Double

`float` has less precision than `double` (6 vs 15 possible decimal places respectively) and therefore takes up less memory (4 vs 8 bytes). However, `double` runs faster, so you gain speed at the cost of more memory usage.

The system rounds the values you store in either type, which can cause unexpected results, especially with `float` as it has less precision. This is why you will see `double` being used any time accuracy is important, such as in scientific, medical, or financial applications.

The accuracy is lost in `float` compared to `double` because `float` uses 32 bits to store numbers, while `double` uses 64 bits. This means `float` has less precision (about 6-7 decimal places) compared to `double` (about 15 decimal places). The limited bits in `float` lead to rounding errors and less accurate representation of decimal numbers.

### When to Use Float

- Use `float` only when precision is not critical: For applications where slight inaccuracies are acceptable.
- Custom data types or libraries: Some libraries offer arbitrary precision arithmetic, but they may not be as memory efficient as `float`.
