# Shuffle Program
A program that prompmts an user to input a positive integer 'n', and then the program outputs the integers from 1 to n in a random order

## Instructions

## Python Version
Must have Python installed on your system

### Steps
1. Open a terminal in the directory where the file shuffle.py is saved
2. Run the program using:

```bash
python shuffle_integers.py
```
3. Enter a positive integer when promp ted.

## C++ Version
Must have a C++ compiler installed on your system

### Steps
1. Open a terminal in the directory where the file shuffle.cpp is saved
2. Compile the program using:
```bash
g++ -o shuffle shuffle.cpp
```
3. Run the program using:
```bash
./shuffle
```
4. Enter a positive integer when prompted.

## Time and Space Complexity

### Time Complexity:
O(n)
- Creating list/vector of size n: O(n)
- Shuffling the list/vector: O(n)
- Printing the shuffled list: O(n)

### Space Complexity:
O(n)
- When list/vector or size n is created to store integers from 1 to n

## References
These resources helped me implement the shuffle logic 
- https://www.geeksforgeeks.org/dsa/shuffle-a-given-array-using-fisher-yates-shuffle-algorithm/
- https://www.geeksforgeeks.org/dsa/linear-congruence-method-for-generating-pseudo-random-numbers/
- https://en.wikipedia.org/wiki/Linear_congruential_generator