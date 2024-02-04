#include <cs50.h>
#include <stdio.h>

void algo(long);
int main(void)

{
    long card = get_long("Your card number: ");
    if (card < 999999999999 || card > 10000000000000000)
    {
        algo(1);
    }
    else
    {
        long cardfordigits = card;
        algo(card);
    }
}

void algo(long cardfordigits)
{
    int n = 1;
    long sum = 0;
    long sub = 0;
    long subtwo = 0;
    // sum of all digits according to algo
    for (n = 1; cardfordigits > 0; n++)
    {
        if (n % 2 > 0)
        {
            subtwo = cardfordigits % 10;
            sum = sum + subtwo;
        }
        else
        {
            sub = cardfordigits % 10;
            int submore = 2 * sub;
            if (submore > 9)
            {
                submore = submore % 10 + submore / 10;
            }
            sum = sum + submore;
        }
        cardfordigits = cardfordigits / 10;
    }

    if (sub * 10 + subtwo > 50 && sub * 10 + subtwo < 56 && sum % 10 == 0 && n - 1 == 16)
    {
        printf("MASTERCARD\n");
    }
    else if (sub == 4 && sum % 10 == 0 && n - 1 == 16)
    {
        printf("VISA\n");
    }
    else if (subtwo == 4 && sum % 10 == 0 && n - 1 == 13)
    {
        printf("VISA\n");
    }
    else if (sub + subtwo * 10 == 34 && sum % 10 == 0 && n - 1 == 15)
    {
        printf("AMEX\n");
    }
    else if (sub + subtwo * 10 == 37 && sum % 10 == 0 && n - 1 == 15)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
