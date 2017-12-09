#include <stdio.h>
#include <string.h>

int main()
{
    char input[10];
    int c = 1;
    while(gets(input))
    {

        if(input[0] == '*') break;

        if(!strcmp(input, "Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",c);
        else
            printf("Case %d: Hajj-e-Asghar\n", c);
        c++;
    }
    return 0;
}
