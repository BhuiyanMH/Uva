#include <stdio.h>

int main()
{
    int t,f,i,j,k;
    long int result=0,num=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&f);
        for(j=1;j<=f;j++){
            long int arr[3];
            for(k=0;k<3;k++){
                scanf("%ld",&arr[k]);
            }
            num=arr[0]*arr[2];
            result=result+num;
        }
        printf("%ld\n",result);
        result=num=0;
    }
    return 0;
}
