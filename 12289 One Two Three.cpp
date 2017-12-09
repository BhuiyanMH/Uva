#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t;
    char arr[8];

    scanf("%d", &t);
    getchar();

    for(int i=1; i <= t; i++)
    {
        gets(arr);

        int l = strlen(arr);

        if( l == 5 ) printf("3\n");

        else if( arr[0] == 'o' && arr[1] == 'n') printf("1\n");
        else if( arr[0] == 'o' && arr[2] == 'e') printf("1\n");
        else if( arr[1] == 'n' && arr[2] == 'e') printf("1\n");
        else printf("2\n");
    }
}
