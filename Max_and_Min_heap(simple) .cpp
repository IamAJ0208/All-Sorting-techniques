/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void heap(int *,int);
void heapsort(int *,int);
void heapify(int *arr,int n,int i)
{
    
    if(i!=0)
    {
        int h=(i-1)/2;
        if(arr[h]>arr[i])
        {
            swap(arr[h],arr[i]);
            heapify(arr,n,h);
        }
        else
        {
            return;
        }
    }
    else
    {
        return;
    }
    
}

void heap(int * arr, int n)
{
    for(int i=0;i<n;i++)
    {
        heapify(arr,n,i);
    }
}

void heapsort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        swap(arr[0],arr[n-i-1]);
        heap(arr,n-i-1);
    }
}

int main()
{
    int n=6;
    int arr[n]={3,9,4,5,1,2};
    cout<<"\n";
    heap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    heapsort(arr,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
