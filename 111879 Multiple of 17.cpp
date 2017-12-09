#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char input[1001];

    while(gets(input)){
        if(input[0] == '0') break;

        int l = strlen(input);
        int remainder=0, divident;

        for(int j=0; j<l; j++){

            divident = remainder * 10 + (input[j] - '0');
            remainder = divident % 17;
        }
        if(remainder == 0) printf("1\n");
        else printf("0\n");

    }

}
