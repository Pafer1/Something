#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // ask user for positive height of pyramid
    int n;
    do
    {
        n = get_int("What height of the pyramid do u want? ");
    }
    while (n < 1 || n > 8);

    // God bless me printing that pyramid

    for (int h = 1; h <= n; h++)
    {
        // h is the height of pyramid, loop ends when it equals to n
        // sp is "spaces" and should end with 0 in the last pyramid line
        // prh is number of hashes it starts from 1, because pyramid can be 1 block high
        for (int sp = h; sp < n; sp++)
        {
            printf(" ");
        }
        for (int prh = 1; prh <= h; prh++)
        {
            printf("#");
        }
        printf("  ");
        for (int prh = 1; prh <= h; prh++)
        {
            printf("#");
        }
        printf("\n");
    }
}
