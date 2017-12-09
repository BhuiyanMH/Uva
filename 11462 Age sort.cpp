#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

static int heapSize;
void Max_Heapify(int data[],int node , int size);
void Build_Max_Heap(int data[], int size);
void Heapsort(int data[], int size);
int data[2000002];

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        if(n ==0)
            break;

        for(long int i=1; i<=n;i++)
        {
            scanf("%d", &data[i]);
        }

        Heapsort(data, n);

        for(int i =1; i<=n; i++)
        {
            if(i !=1)
                printf(" ");
            printf("%d", data[i]);
        }
        printf("\n");

    }

    return 0;
}

void Max_Heapify(int data[],int node,  int heapSize)
{
    int left, right,  largest;

    left = 2*node;
    right = (2*node)+1;

    if((left <= heapSize)&&data[left] >data[node])
    {
        largest = left;
    }
    else
    {
        largest = node;
    }

    if(right<=heapSize && data[right] > data[largest])
    {
        largest = right;
    }

    if(largest != node)
    {
        int temp = data[node];
        data[node] = data[largest];
        data[largest] = temp;
        Max_Heapify(data, largest, heapSize);

    }
}

void Build_Max_Heap(int data[], int size)
{
    int i;
    heapSize = size;
    i = floor(size/2);

    for(i; i>=1; i--)
    {
        Max_Heapify(data, i, heapSize);
    }
}

void Heapsort(int data[], int size)
{
    int j, temp;

    Build_Max_Heap(data, size);

    for(j = size; j>=2; j--)
    {
        temp = data[1];
        data[1] = data[j];
        data[j] = temp;
        heapSize--;
        Max_Heapify(data, 1, heapSize);
    }
}

