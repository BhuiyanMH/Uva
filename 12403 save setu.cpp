#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    long int dn,ac=0;
    char c[7];

    scanf("%ld", &t);

    for(t;t>0;t--){
       scanf("%s",c);

        if(!strcmp(c,"donate")){
            scanf("%ld",&dn);
            ac+=dn;
        }
        else printf("%ld\n",ac);
    }

}
