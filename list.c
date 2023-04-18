#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node // здесь node относится к struct
{
    string phrase;
    struct node *next;  // указываем на следующии node
}
node; // здесь node относится к typedef

#define LIST_SIZE 2

void unload(node *list);
void visualize(node *list);

int main(void)
{
    node *list = NULL; 

    // Add items to list 
    for (int i = 0; i < LIST_SIZE; i++)
    {
        string phrase = get_string("Enter a phrase: ");

        node *n =  malloc(sizeof(node));
        if (n == NULL)
        {
            printf("Error");
            return 1;
        }
        n->phrase = phrase;
        n->next = list;

        list = n;
        // Visualize list after adding a node 
        visualize(list);
    }
    unload(list);
}

void unload(node *list)
{
    // Free all allocated nodes
    while (list != NULL)
    {
        node *ptr = list->next;
        free(list);
        list = ptr;
    }
    
}

void visualize(node *list)
{
    printf("Location: %p\n", list);
    printf("Phrase: %s\n", list ->phrase);
    printf("Next: %p\n", list ->next);
    list = list ->next;
    printf("_______________\n");
}
