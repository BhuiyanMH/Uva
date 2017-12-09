#include <stdio.h>
#include <string.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    getchar();
    char in[605];

    for(int i = 1; i <= tc; i++)
    {
        gets(in);

        int numA=0, numG = 0, numI = 0, numM=0, numR = 0, numT = 0;
        int l = strlen(in);
        int minimum = 1000;

        for(int j =0; j < l; j++)
        {
            switch(in[j])
            {
            case 'A':
                numA++;
                break;
            case 'G':
                numG++;
                break;
            case 'I':
                numI++;
                break;
            case 'M':
                numM++;
                break;
            case 'R':
                numR++;
                break;
            case 'T':
                numT++;
                break;
            }

        }

        numR = numR/2;
        numA = numA/3;

        if(numA < minimum)
            minimum = numA;

        if(numG < minimum)
            minimum = numG;

        if(numI < minimum)
            minimum = numI;

        if(numM < minimum)
            minimum = numM;

        if(numR < minimum)
            minimum = numR;

        if(numT < minimum)
            minimum = numT;

        printf("%d\n", minimum);
        minimum = 1000;
    }
    return 0;
}
