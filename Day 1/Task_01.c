#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0, temp = 1000000;

    while ((scanf("%d", &n)) != EOF)
    {
        if (n > temp)
            count++;

        temp = n;
    }
    
    printf("Answer: %d\n", count);
    return 0;
}