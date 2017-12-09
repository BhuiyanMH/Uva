#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    char number[255], mul[255];
    while(gets(number) && gets(mul))
    {

        char result[700];

        for(int l = 0; l<700; l++)
        {
            result[l] = '0';
        }

        int lengthOfMul, lengthOfNum, start = 0;

        lengthOfNum = strlen(number);
        lengthOfMul = strlen(mul);

        for(int i = lengthOfMul-1; i>=0; i--)
        {
            int indx = start;
            int carry = 0;
            for(int j = lengthOfNum-1; j>=0; j--)
            {
                int temp = carry + (result[indx]-'0') + (number[j]-'0')*(mul[i]-'0');
                result[indx] = (temp%10) + 48;
                carry = temp/10;
                indx++;
            }
            if(carry)
            {
                result[indx] = carry+48;
                indx++;
            }
            start++;
            if(i == 0 )
            {
                result[indx] = '\0';
            }

        }

        int length = strlen(result);
        bool isfound = false;
        for(int p = length-1; p>=0; p--)
        {
            if(result[p] != '0')
                isfound =true;
            if(isfound || p==0)
                printf("%c", result[p]);
        }
        printf("\n");
    }
    return 0;
}
