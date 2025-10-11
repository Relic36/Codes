#include <stdio.h>

// Program to find the greatest of four numbers
int main()
{
    int n1, n2, n3, n4;

    // Input section
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    printf("Enter number 3: ");
    scanf("%d", &n3);
    printf("Enter number 4: ");
    scanf("%d", &n4);

    // Logic to find the greatest number
    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            if (n1 >= n4)
            {
                printf("\nThe greatest number is: %d\n", n1);
            }
            else
            {
                printf("\nThe greatest number is: %d\n", n4);
            }
        }
        else
        {
            if (n3 >= n4)
            {
                printf("\nThe greatest number is: %d\n", n3);
            }
            else
            {
                printf("\nThe greatest number is: %d\n", n4);
            }
        }
    }
    else
    {
        if (n2 >= n3)
        {
            if (n2 >= n4)
            {
                printf("\nThe greatest number is: %d\n", n2);
            }
            else
            {
                printf("\nThe greatest number is: %d\n", n4);
            }
        }
        else
        {
            if (n3 >= n4)
            {
                printf("\nThe greatest number is: %d\n", n3);
            }
            else
            {
                printf("\nThe greatest number is: %d\n", n4);
            }
        }
    }

    return 0;
}