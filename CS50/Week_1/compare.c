#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x less than y\n");
    }
    else if (x > y)
    {
        printf("x more than y\n");
    }
    else
    {
        printf("x equal y\n");
    }
}
