#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, l,i,j,sw=0,temp;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &l);
        int arr[l];
        for(i=0;i<l;i++){
            scanf("%d", &arr[i]);
        }

        for(i=0;i<l;i++){
            for(j=i+1;j<l;j++){
                if(arr[j]<arr[i]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    sw+=1;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", sw);
        sw=0;
    }
    return 0;
}
