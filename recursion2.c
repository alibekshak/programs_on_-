#include <cs50.h>
#include <stdio.h>

int recursion(int number);

int main(void)
{
    
    int n = get_int("Type a number: ");
    printf("%i-times you need to repeat to get 1\n", recursion(n));
}

// Collatz conjecture (Гипотеза Коллатца)
int recursion(int number)
{
   // base case
    if (number == 1)
        return 0;
    // even numbers
    else if((number % 2) == 0)
        return 1 + recursion(number/2);
    // odd numbers
    else
        return 1 + recursion(3 *number+ 1);
}