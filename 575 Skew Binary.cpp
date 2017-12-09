#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char input[1000];
    int length, power;

    long int output=0;

    while(gets(input)){

            if(input[0] == '0') break;

            length=strlen(input);
            power = length;

            for(int i=0; i<length; i++){
            output+=((input[i]-'0')*(pow(2,power)-1));
            power--;
            }

        printf("%ld\n", output);
        output=0;
    }
}
