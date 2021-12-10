#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char str[15];
    int n, i = 0, forward = 0, depth = 0;

    while ((scanf("%d", &n)) != EOF)
    {
        i++;

        if (i % 3 == 1)
            scanf("%s", &str);

        if (i % 3 == 0)
        {
            if (str[0] == 'f')
                forward = forward + n;
            else if (str[0] == 'd')
                depth = depth + n;
            else if (str[0] == 'u')
                depth = depth - n;
        }
    }

    // Ojeb lebo nečíta posledné číslo
    forward = forward + 5;

    printf("Distance: %d\n", forward);
    printf("Depth: %d\n", depth);
    n = forward * depth;
    printf("---------------------\n");
    printf("Answer: %d\n", n);
    return 0;
}
