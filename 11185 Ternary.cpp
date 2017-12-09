#include <stdio.h>
#include <math.h>

int main()
{
    long int input;

    while(scanf("%ld", &input))
    {
        if( input == 0){
            printf("0\n");
            continue;
        }
        if(input < 0) break;

        int arr[10000];
        int index = 0;

        while(input != 0)
        {
            arr[index] = input%3;
            input = input/3;
            index++;
        }

        for(index=index-1; index >= 0; index--)
        {
            printf("%d", arr[index]);
        }
        printf("\n");
    }

    return 0;

}
