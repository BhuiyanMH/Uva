#include <stdio.h>

int main()
{
    int m,n,cnt=0;
    while(scanf("%d %d", &m, &n) !=EOF){
        for(n;n>1;n--){
                cnt+=m;
        }
        printf("%d\n",cnt+(m-1));
        cnt=0;
    }

    return 0;
}
