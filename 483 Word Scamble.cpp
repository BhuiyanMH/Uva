#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i=0,l,j=0,c=0;


    while(gets(str)){

        l=strlen(str);

        for(i=0;i<l;i++){
            if(str[i]== ' '){
                for(j=i-1;j>=c;j--){
                    printf("%c",str[j]);
                }
                printf(" ");
                 c=i+1; //c=i dile last word e akta besi space print korbe.
            }
            else if(i == l-1)
                    for(l=l-1;l>=c;l--) printf("%c",str[l]);

        }
        printf("\n");
        c=0;

    }

    return 0;

}
