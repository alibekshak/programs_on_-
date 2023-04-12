#include <cs50.h>
#include <stdio.h>
#include <stdint.h>


int main(int argc, string argv[])
{
    // check for improper usage, otherwise, get filename length
    if (argc != 2)
    {
        printf("Improper usage.");
        return 1;
    }

    // open file 
    string filename = argv[1]; // при запуске сперва идет ./pdf(0 индекс), дальше название фаила(1 индекс) (Пример ./pdf test_jpeg.jpeg)
    FILE *file = fopen(filename, "r"); // чтение файла 

    // check if file exists
    if (file == NULL)
    {
        printf("No such file found.\n");
        return 1;
    }

    u_int8_t buffer[4]; // размер целочисленных типов
    fread(buffer, 1, 4, file);
    for (int i = 0; i<4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(file);
    return 0;
}