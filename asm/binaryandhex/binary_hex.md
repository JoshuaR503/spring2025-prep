
## Binary and Hexadecimal Notes 01/29/2025

everything discussed in this class is about the lower levels of the computer
computers only understand 0 and 1 because the itmes are just on and off.
electric dcircutous inly have two states, on and off and this is how binaries are represented 

## Number system
we currently use the ecimal number system whichi is based on 10
on decimal number we start from 0 to 9 

## Binary number based
binary number base is 2
0, 1

## stuff to study 
psitional notiation 
bainry numbers 
numeral base systems 
alphanumeric characters 

## Binary 
2, 5, 6
2x10, 5x10, 6x10 

1 * 2^0 = 1
1 * 2^1 = 2
0 * 2^2 = 0
1 * 2^3 = 8
1 * 2^4 = 16
0 * 2^5 = 0
1 * 2^6 = 64
1 * 2^7 = 128

Total = 1 + 2 + 0 + 8 + 16 + 0 + 64 + 128 = 219

## Notes 02/03/2025

### Decimal Numbers to Remember
- 199 
- 137
- 81
- 28 
- 7
- 10

the quiz will require me to enter the entire number 

### Converting Decimal to Binary

#### Example Conversions
- **Convert `0b11110` to Hex:**
- **Convert `0xFF` to Binary:**

### Signed and Unsigned Number Systems
there are signed and unsigned numbers systems, which can be positive or negative numbers 

```
[] [] [] []
^
| left most bit, which will represent the signed information 
if 0, then positive
if 1, then negative 
```

#### Examples
- `1, 0 0 0 1` < positive number 1
- `1, 1 0 0 1` < negative number 1

### How to Represent Numbers
1. **Signed Magnitude**
2. **Two's Complement**

#### Signed Rule
the left most has either 0 or 1 to represent the sign. Sign. Mag. Bin

- **91 in signed magnitude**

#### 4-bit Numbers
- 4 bit unsigned binary number 
- 4 bit signed magnitude binary number 

these two systems are different 

with signed, you have a different range 

### Project: Implement 3, 4, Bits and Unsigned and Signed Bits 
1. dirty 0
2. need position represent sign 
3. general arithmetic issues 

this is not how it works in the real life.

### Two's Complement
two complement is how it works in the real world 

#### Negate Two's Complement Number 
1. flip each bit
2. add 1
3. add 3

#### 4-bit Two's Complement Example
