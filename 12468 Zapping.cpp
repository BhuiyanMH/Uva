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

        if( abs( current - destination ) > 50)
        {
            if(current < 50)
            {

            }
            else
            {

            }

        }

        else
            numOfPress = abs(destination - current);
        printf("%d\n", numOfPress);


    }

}
