#include <stdio.h>

int main()
{

    int j;
    long int i,t,temp,arr[4];

        scanf("%ld",&t);
        for(i=1;i<=t;i++){
            scanf("%ld %ld %ld %ld",&arr[0] ,&arr[1] ,&arr[2] ,&arr[3]);
            if((arr[0]==arr[1])&&(arr[1]==arr[2])&&(arr[2]==arr[3])){
                    printf("square\n");
                    continue;
            }
             if((arr[0]==arr[2])&&(arr[1]==arr[3])||((arr[0]==arr[1])&&(arr[2]==arr[3]))||((arr[0]==arr[3])&&(arr[1]==arr[2]))){
                    printf("rectangle\n");
                    continue;
            }
            for(j=1;j<=3;j++){
                if(arr[0]<arr[j]){
                    temp=arr[0];
                    arr[0]=arr[j];
                    arr[j]=temp;
                }
            }

            if((arr[1]+arr[2]+arr[3])>arr[0]){
                printf("quadrangle\n");
            }
            else printf("banana\n");
        }

    return 0;
}
