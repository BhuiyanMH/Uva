#include <stdio.h>
#include <math.h>


int main()
{
    int numInput;
    while(scanf("%d", &numInput) !=EOF)
    {
        int arr[numInput];

        for(int i=0; i<numInput; i++)
        {
            scanf("%d", &arr[i]);
        }

        int numFlip = 0;
        for(int j = 1; j <= numInput; j++)
            for(int k = numInput-1; k >= j; k--)
        {
            if(arr[k-1] > arr[k])
            {
                int temp = arr[k-1];
                arr[k-1] = arr[k];
                arr[k] = temp;
                numFlip++;
            }
        }

        printf("Minimum exchange operations : %d\n", numFlip);

    }
}
