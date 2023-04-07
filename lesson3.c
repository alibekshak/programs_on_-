#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 5;

    int guess = get_int("What's your guess? ");

    if (guess != number)
    {
        printf("Wrong guess!");
        return 0;
    }

    printf("You're correct!");
    return 1;
}