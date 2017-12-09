#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct pay
{
    char ch;
    int amount;

};

int main()
{
    int tc;
    scanf("%d", &tc);

    for(int i=0; i<tc; i++)
    {
        int number;
        long int noOfLine;

        scanf("%d", &number);
        pay arr[number];
        getchar();
        for(int i=0; i<number; i++)
        {
            scanf("%c", &arr[i].ch);
            getchar();
            scanf("%d", &arr[i].amount);
            getchar();

        }


        scanf("%ld", &noOfLine);

        long long int payment = 0;

        getchar();
        for(int j=0; j<noOfLine; j++)
        {
            char line[10010];

            gets(line);
            int length = strlen(line);

            for(int k=0; k<length; k++)
            {

                for(int p=0; p<number; p++)
                {
                    if(arr[p].ch == line[k])
                    {
                        payment+=arr[p].amount;
                    }
                }
                if(k+1 == length)
                    break;

            }

        }

        int dollar = payment / 100;
        int cent = payment%100;

        printf("%d.%02d$\n", dollar, cent);
    }

}
