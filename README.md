# CS50-cash-project
CS50x Cash solution in C – A greedy algorithm to calculate the minimum number of coins required to give change.

To run this code locally, you need a C compiler (such as gcc or clang) and the CS50 library.

## Compiling and RunninCS50x - Cash (Greedy Algorithm)

This is a C program that calculates the minimum number of coins required to give a user change, implementing a Greedy Algorithm.

This project is part of CS50's Introduction to Computer Science (Problem Set 1).

## How It Works:

The program prompts the user for the amount of change owed (in cents) and continuously asks until a non-negative integer is provided. It then calculates the minimum number of coins needed using standard US coin denominations:

Quarters (25¢)

Dimes (10¢)

Nickels (5¢)

Pennies (1¢)

The Greedy Algorithm always takes the largest possible coin value first to minimize the total coin count.

### Getting Started:

## Prerequisites:

If you are using the CS50 IDE or standard environment:

make cash
./cash


If you are compiling manually with standard gcc:

gcc cash.c -lcs50 -o cash
./cash


## Example Output:

Change owned: 70
4


(70 cents = 2 quarters [50¢] + 2 dimes [20¢] = 4 coins total)

License

This project is open-source and created for educational purposes.
