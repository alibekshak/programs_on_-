#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");  // строки всегда записываются с двойными кавычками
    printf("Hellow, %s\n", name); // printing 
    return 0; // завершает функцию main 
}