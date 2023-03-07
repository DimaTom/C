#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int start;
    do
    {
        start = get_long("How many lammas do we have? ");
        if (start < 9)
        {
            printf ("Size should be at least 9\n");
        }
    } 
    while (start < 9);

    int goal;
    do
    {
        goal = get_long ("How many lammas do we need? ");
        if (goal<start)
        {
            printf ("Goal can't be less then current quantity\n");
        }
    }
    while (goal<start);
    
    int years = 0;
    while (start < goal)
    {
        start += start / 12;
        years++;
    }
    
    printf("We need %i years\n", years);
}
