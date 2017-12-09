#include<stdio.h>

int main()
{
    int c,n,l,m,k=0;
    long int sum_1=0;
    float percent,avg_1;
    scanf("%d",&c);
    for(m=1;m<=c;m++){
    scanf("%d",&n);
    int marks[n];
    for(l=0;l<n;l++){
        scanf("%d",&marks[l]);
        sum_1=sum_1+marks[l];
       }
     avg_1=(float)sum_1/(float)n;
    for(l=0;l<n;l++){
      if(marks[l]>avg_1)k=k+1;
    }
    percent=(k*100)/(float)n;
    printf("%.3f%c\n",percent,37);
    k=percent=sum_1=0;
    }

    return 0;

}


