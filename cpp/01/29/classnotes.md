## Quiz and Assignments

- **Quiz 1**: Next Wednesday
- **Reading #1ab**: Due Sunday
- **CC #1a**: Due Monday (use SFSU email to sign up for ZyBooks)
- **Reading #2**: Due soon
- **Classwork #1B**: Due soon

## File Stream Objects

### Error Handling
- `std::cerr`: Used for error handling. This is the recommended way to handle errors, but we won't use it this semester.

### Input File Stream
- `ifstream`: Input file stream from the file stream library.

```cpp
ifstream inputStreamName("name_of_file");

if (inputStreamName.is_open()) {
    // File is open, proceed with reading
}

inputStreamName.close(); // Close the file stream

inputStreamName.eof(); // Check if end of file is reached
```

### Common Methods
- `open`: Open a file
- `is_open`: Check if the file is open
- `close`: Close the file
- `eof`: Check if the end of file is reached

### File Existence Check
- Always check if the file exists before calling `open` or declare and open in the same line.

```cpp
ifstream testFileStream("file_name");

if (testFileStream.is_open()) {
    // If the file opens, it means it exists. Close it after checking.
    testFileStream.close();
} else {
    // If the file does not open, it means it doesn't exist. We can write into it.
    ofstream outputFileStream("file_name");
    // Write to the file
    outputFileStream.close();
}
```

### Notes on Data Types and Strings

#### General Guidelines
- Use safer methods when available.
- Aim for readable, maintainable, reusable, and efficient code.
- We will not use the `for each` loop because we need to be solid on the `for` loop.

#### Types of Data Types and Strings

- **Primitive Data Types**: `int`, `char`, `bool`
    - Primitive data types contain very small sets of data, sizes, content types, and have specific memory locations.

- **Fundamental Data Type**: Array
    - An array has contiguous memory, meaning memory is allocated one after the other.
    - **Note**: Do arrays know what size they are?

- **User Defined Data Types**: C++ `struct`
    - These bundle data, attributes, and functions/methods.

#### Strings in C++
- Strings are array-based classes.
- C++ strings are classes and part of the standard library.

**Important**: If you do not understand how arrays work, it will be difficult to write good code.

- To include quotes inside strings, use a backslash (`\`).

```cpp
my_string.push_back('z'); // Pushes a character to the end of the string
```

- This operation is fine as a standalone, but if used inside a loop, it can cause issues.
    - If the array is smaller, it forces a reallocation, which is a very expensive operation in both time and resources.
    - Do not use this very inefficient code because your code will suck

### C Strings

C Strings are used in different versions of C++. A C string is a character array terminated with a null character (`\0`), which marks the end of the string. All functions that work with C strings assume they are null-terminated, allowing them to parse the string correctly.

#### Important Points:
- **Null Termination**: The null character (`\0`) is crucial as it signifies the end of the string.
- **Character Array**: C strings are essentially arrays of characters.
- **Functions**: Functions that operate on C strings rely on the null terminator to determine the string's length.

#### Example:
```cpp
char myStr[] = "Hello, World!";
```

#### Common Pitfalls:
- **Buffer Overflow**: Ensure the character array is large enough to hold the string and the null terminator.
- **Null Terminator**: Always remember to include the null terminator when working with C strings.

#### Conversion to C++ Strings:
- You can convert a C string to a C++ string using the `std::string` constructor.
- Avoid using `myStr.c_str()` unless necessary, as it returns a pointer to a null-terminated character array.

```cpp
std::string cppStr = myStr; // Convert C string to C++ string
```

- Use `myStr.c_str()` only when you need a C-style string from a C++ string.

```cpp
const char* cStr = cppStr.c_str(); // Get C-style string from C++ string
```

Remember, while C strings are powerful, they require careful handling to avoid common issues like buffer overflows and improper null termination.



start with high level stuff and sowly get into lower level stuff 
