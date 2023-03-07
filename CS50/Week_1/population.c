#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long start;
    do
    {
        start = get_long("Start size: ");
        if (start < 9)
        {
            printf("%li llama(s) is not enough. The population of llamas will quickly become stagnant!\n", start);
        }
    } 
    while (start < 9);
    
    long goal;
    do
    {
        goal = get_long("End size: ");
        if (goal < start)
        {
            printf("End size cannot be less than start size.\n");
        }
    } 
    while (goal < start);

    int years = 0;
    while (start < goal)
    {
        int born = start / 3;
        int dead = start / 4;
        start += born - dead;
        years++;
    }

    printf("Years: %i\n", years);
}
