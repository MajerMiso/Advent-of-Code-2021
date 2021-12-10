#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char str[15];
    int n, i = 0, forward = 0, depth = 0, aim = 0;

    while ((scanf("%d", &n)) != EOF)
    {
        i++;

        if (i % 3 == 1)
            scanf("%s", &str);

        if (i % 3 == 0)
        {
            if (str[0] == 'f')
            {
                forward = forward + n;
                depth = depth + aim * n;
            }
            else if (str[0] == 'd')
            {
                aim = aim + n;
            }
            else if (str[0] == 'u')
            {
                aim = aim - n;
            }
        }
    }

    // Ojeb lebo nečíta posledné číslo
    forward = forward + 5;
    depth = depth + aim * n;

    printf("Distance: %d\n", forward);
    printf("Depth: %d\n", depth);
    printf("Aim: %d\n", aim);
    forward = forward * depth;
    printf("---------------------\n");
    printf("Answer: %d\n", forward);

    return 0;
}
