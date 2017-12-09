#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int current, destination, numOfPress;

    while(scanf("%d %d", &current, &destination))
    {
        if(current == -1 && destination == -1)
            break;

        else if( current >= 50 && abs(destination - current) > 50 )
            numOfPress = 99 - current + destination + 1;

        else if(abs(destination - current) > 50)
        {
            numOfPress = (99 - destination + current + 1)%99;
        }

        else
        {
            numOfPress = abs(destination - current);

        }

        printf("%d\n", numOfPress);

    }

}
