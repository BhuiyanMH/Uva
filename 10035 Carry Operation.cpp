#include <stdio.h>
int main()
{
    long int a,b;
    int carr,c;

    while(scanf("%ld %ld", &a, &b)){

            if(!a && !b) break;
            carr=c=0;

            while( a || b){              //(a || b) means (a!=0 || b!=0)
                c=( a%10 + b%10 +c )/10; // (last digit of a+last digit of b+previous carry)/10=current carry.
                carr+=c;
                a=a/10;
                b=b/10;
            }

        if(carr==0) printf("No carry operation.\n");
        else if(carr==1) printf("1 carry operation.\n"); // for one there will be operation not operations.
        else  printf("%d carry operations.\n",carr);
    }
    return 0;
}
