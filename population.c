#include <cs50.h>
#include <stdio.h>

int main(void)
    {
    int a;
    int b;
    int y = 0;


    // TODO: Prompt for start size
    do
    {
        a = get_int("Input start size:\n ");
    }
    while (a < 9);


    // TODO: Prompt for end size
     do
    {
        b = get_int("Input end size:\n ");
    }
    while (b < a);


    // TODO: Calculate number of years until we reach threshold
     while (a < b)
     {
         a = a + (a / 3) - (a / 4);
         y++;
     }

    // TODO: Print number of years
    printf("years: %i\n", y);
}