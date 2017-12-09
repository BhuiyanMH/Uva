#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    char input[1000009];
    int tc;
    scanf("%d", &tc);
    getchar();
    while(tc--)
    {
        gets(input);


        char letters[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        int num;
        scanf("%d", &num);
        getchar();
        char b, r;

        for(int i = 0; i<num; i++)
        {
            scanf("%c %c",&b ,&r );
            getchar();
            for(int j=0; j<26; j++)
            {
                if(letters[j] == r)
                {
                    letters[j] = b;
                }
            }

        }

        long limit = strlen(input);

        for(int l =0; l<limit; l++)
        {
            if(input[l] !='_')
                input[l] = letters[(input[l] - 65)];

        }

        puts(input);

    }

    return 0;
}
