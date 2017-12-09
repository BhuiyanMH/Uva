#include <stdio.h>

int main()
{
    int x,y,t, divX, divY;

    while( scanf("%d",&t)!=EOF){

        if(t == 0 ) break;

        scanf("%d %d", &divX, &divY);

        for(int i =1; i<=t; i++)
        {
            scanf("%d %d", &x, &y);

            if( x == divX || y == divY)
                printf("divisa\n");

            else if( x > divX && y > divY)
                printf("NE\n");
            else if( x > divX && y <divY )
                printf("SE\n");
            else if(x < divX && y > divY)
                printf("NO\n");
            else
                printf("SO\n");
        }

    }
    return 0;
}
