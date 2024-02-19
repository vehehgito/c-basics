/* 
A currency has the notes of 1, 2, 5, 10, 50, 100, 500, 1000. 
You have to find the minimum number of notes required for any amount.
*/

#include <stdio.h>

int main()
{
    int amount, notes = 0;
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    while (amount != 0)
    {
        if (amount >= 1000)
        {
            notes += amount / 1000;
            amount = amount % 1000;
        }
        else if (amount >= 500)
        {
            notes += amount / 500;
            amount = amount % 500;
        }
        else if (amount >= 100)
        {
            notes += amount / 100;
            amount = amount % 100;
        }
        else if (amount >= 50)
        {
            notes += amount / 50;
            amount = amount % 50;
        }
        else if (amount >= 10)
        {
            notes += amount / 10;
            amount = amount % 10;
        }
        else if (amount >= 5)
        {
            notes += amount / 5;
            amount = amount % 5;
        }
        else if (amount >= 2)
        {
            notes += amount / 2;
            amount = amount % 2;
        }
        else if (amount >= 1)
        {
            notes += amount / 1;
            amount = amount % 1;
        }
    }

    printf("The minimum number of notes required is: %d", notes);
    return 0;
}