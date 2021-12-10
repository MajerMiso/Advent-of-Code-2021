#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, i, a, b, c;
    int av = 0, bv = 0, cv = 0;
    int acount = 0, bcount = 0, ccount = 0;
    int temp = 0;
    int count = 0;

    while (1)
    {
        i++;
        scanf("%d", &x);

        if (x == temp)
            break;

        temp = x;

        acount++;
        a = a + x;
        bcount++;
        b = b + x;
        ccount++;
        c = c + x;

        if (i == 1)
        {
            bcount = 0;
            b = 0;
        }
        else if (i == 2)
        {
            ccount = 0;
            c = 0;
        }

        if (acount % 3 == 0)
        {
            av = a;
            a = 0;
            acount = 0;

            if (i != 3 && cv != 0)
            {
                if (av > cv)
                {
                    count++;
                }
            }
        }

        if (bcount % 3 == 0)
        {
            bv = b;
            b = 0;
            bcount = 0;

            if (bv > av)
                count++;
        }

        if (ccount % 3 == 0)
        {
            cv = c;
            c = 0;
            ccount = 0;

            if (cv > bv)
                count++;
        }
    }

    printf("Toto je vysledny pocet: %d\n", count);

    return 0;
}
