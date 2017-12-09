#include <stdio.h>
#include <string.h>

int main()
{
    int t, c, r=0,l,j;
    char s[105];

    scanf("%d", &t);
    getchar();
    for(c=1;c<=t;c++){

            gets(s);
            l=strlen(s);
            for(j=0;j<l;j++){
                if(s[j]==' ') r+=1;
                else if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j'|| s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w') r+=1;
                else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k'|| s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x') r+=2;
                else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l'|| s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y') r+=3;
                else r+=4;
            }
            printf("Case #%d: %d\n", c, r);
            r=0;
    }

}
