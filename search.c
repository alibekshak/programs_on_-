#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 40, 500, 10, 1, 4, 350}; // [] - массив(array)

    int n = get_int("Number: ");
    for (int i = 0; i<7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}