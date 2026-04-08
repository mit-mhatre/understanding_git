#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int *ptr;
    char input;

    printf("Enter 3  integer value\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Adding more dynamic alloc integer values\n");

    do
    {
        printf("Enter an integer\n");
        ptr = (int *)malloc(sizeof(int));
        scanf(" %d", ptr);
        
        printf("Do you want to continue?\n y for yes and n for no\n");
        scanf(" %c", &input);
    }while (input == 'y');

    return 0;



}