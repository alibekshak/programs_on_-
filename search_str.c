#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string name[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("Enter: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(name[i], s) == 0) // спрособ сравнения для str
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}