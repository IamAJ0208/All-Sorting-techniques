#include <bits/stdc++.h>

using namespace std;
void heapify(int *,int,int);
void buildheap(int *arr,int n){
    for(int i=n/2;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}

void heapify(int *arr,int n,int i)
{
    int c1=2*i+1,c2=2*i+2;
    int minimum=i;
    if(c1<n && arr[c1]<arr[minimum])
    {
        minimum=c1;
    }
    if(c2<n && arr[c2]<arr[minimum])
    {
        minimum=c2;
    }
    if(minimum!=i)
    {
        swap(arr[minimum],arr[i]);
        heapify(arr,n,minimum);
    }
}

int main()
{
    int n=6;
    int arr[n]={3,9,4,5,1,2};
    buildheap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}