#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

void Max_Heapify(long data[],int node , int size);
void Build_Max_Heap(long data[], int size);
void Heapsort(long data[], int size);

static int heapSize;
long int data[10000];
int main()
{
    int n = 1;
    while(scanf("%ld", &data[n])==1)
    {
        Heapsort(data, n);

        long median =0;
        int mid = n/2;
        if(n%2==0)
        {

            median = (data[mid]+data[mid+1])/2;
        }
        else
        {
            median = data[mid+1];
        }

        printf("%ld\n", median);
        n++;
    }
    return 0;
}

void Max_Heapify(long data[],int node,  int heapSize)
{
    long left, right,  largest;

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
        long temp = data[node];
        data[node] = data[largest];
        data[largest] = temp;
        Max_Heapify(data, largest, heapSize);

    }
}

void Build_Max_Heap(long data[], int size)
{
    long i;
    heapSize = size;
    i = floor(size/2);

    for(i; i>=1; i--)
    {
        Max_Heapify(data, i, heapSize);
    }
}

void Heapsort(long data[], int size)
{
    long j;
    long temp;

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
