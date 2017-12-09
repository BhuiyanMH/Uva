#include <stdio.h>

main()
{
    int tc, have, found, req, extra=0, eextra=0,total;
    scanf("%d", &tc);

    for(tc;tc>0;tc--){

        scanf("%d %d %d", &have, &found, &req);
        extra=(have + found)/req;
        total=extra;
        eextra=extra+(have+found)%req;

        while(eextra>=req){
            extra=eextra/req;
            total+=extra;
            eextra=extra+eextra%req;
        }

        printf("%d\n", total);

    }

}
