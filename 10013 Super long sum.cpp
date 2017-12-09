#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int RESULT[1000005];
void addBigNumber(char[] , char[], long);
int preCalculated[10][10];

int main()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            preCalculated[i][j] = i+j;
        }
    }

    int tc;
    scanf("%d", &tc);

    long int num;
    while(tc--)
    {
        scanf("%ld", &num);
        getchar();
        char A[num+1], B[num+1];
        long i;
        for(i=0; i<num; i++)
        {
            scanf("%c %c",&A[i], &B[i]);
            getchar();
        }
        A[i] = '\0';
        B[i] = '\0';
        addBigNumber(A,B, num-1);
        if(tc>=1)
            printf("\n");

    }
    return 0;
}

void addBigNumber(char firstNum[], char secondNum[], long n)
{
    int carry = 0, index = 0;
    for(long loop =n; loop>=0; loop--)
    {
        int temp = ( preCalculated[(firstNum[loop]-'0')][(secondNum[loop]-'0')])+carry;
        RESULT[index] = (temp%10);
        if(temp>=10)
            carry = temp/10;
        else
            carry = 0;
        index++;
    }
    if(carry)
        RESULT[index++] = carry;

    for(int p=index-1; p>=0;p--)
    {
        printf("%d", RESULT[p]);
    }
    printf("\n");
    return;
}
