#include <stdio.h>
#include <string.h>

int main()
{
    char c[1000];
    int i=0,l,n=0,k=0;

    while(gets(c)){
        l=strlen(c);
        for(i=0;i<l;i++){
            if(c[i]=='"'){
                n+=1;
                if(n%2!=0){
                    printf("``");
                }
                else printf("''");
            }

            else printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
