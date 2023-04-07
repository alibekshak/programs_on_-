#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;
}
person; // позваляет создать общий файл для всех переменных


int main(void)
{
    person people[2]; // указываем колличество 

    people[0].name = "Jon";
    people[0].number = "+1999333212";

    people[1].name = "David";
    people[1].number = "+9333411231";

    string s = get_string("Enter: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, s) == 0) // спрособ сравнения для str
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}