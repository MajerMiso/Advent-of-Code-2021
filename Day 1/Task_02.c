#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d, count = 1;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    while ((scanf("%d", &n)) != EOF)
    {
        if (a == 0 || b == 0 || c == 0 || d == 0)
            break;

        if ((a + b + c) < (b + c + d))
            count++;

        a = b;
        b = c;
        c = d;
        d = n;
    }

    printf("Answer: %d\n", count);
    return 0;
}
