#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[12];
    int count[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int output[12], inverted[12]; // 1143, 2952

    while ((scanf("%s", &array[0])) != EOF)
        for (int i = 0; i < 12; i++)
            if (array[i] == '1')
                (count[i])++;

    printf("gamma rate:   ");
    for (int i = 0; i < 12; i++)
    {
        if (count[i] > 500)
        {
            output[i] = 1;
            inverted[i] = 0;
            printf("%d", output[i]);
        }else
        {
            output[i] = 0;
            inverted[i] = 1;
            printf("%d", output[i]);
        }
    }

    printf(" -> 1143\n");
    printf("epsilon rate: ");

    for (int i = 0; i < 12; i++)
        printf("%d", inverted[i]);

    printf(" -> 2952\n");
    printf("----------------------------------\n");
    printf("     1143 * 2952 = 3 374 136\n");
    
    return 0;
}