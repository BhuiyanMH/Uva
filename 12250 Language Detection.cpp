#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[16];
    int i =1;

    while(gets(input))
    {
        if(input[0] == '#' && input[1] == '\0')
            return 0;
        if((strcmp(input, "HELLO")) == 0)
            printf("Case %d: ENGLISH\n", i);

        else if((strcmp(input, "HOLA")) == 0)
            printf("Case %d: SPANISH\n", i);

        else if((strcmp(input, "HALLO") )== 0)
            printf("Case %d: GERMAN\n", i);

        else if((strcmp(input, "BONJOUR") )== 0)
            printf("Case %d: FRENCH\n", i);

        else if((strcmp(input, "CIAO")) == 0)
            printf("Case %d: ITALIAN\n", i);

        else if((strcmp(input, "ZDRAVSTVUJTE")) == 0)
            printf("Case %d: RUSSIAN\n", i);

        else
            printf("Case %d: UNKNOWN\n", i);
        i++;
    }
    return 0;
}
