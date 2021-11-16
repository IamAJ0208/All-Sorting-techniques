/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
    return a.first>b.first;
}

int main()
{
    
    vector<pair<int,int>> vec;
    
    int n;
    
    cin>>n;
    int d,p;
    
    for(int i=0;i<n;i++)
    {
        cin>>p>>d;
        vec.push_back(make_pair(p,d));
    }
    sort(vec.begin(),vec.end(),compare);
    
    int max_dead=-1;
    for(int i=0;i<n;i++)
    {
        if(max_dead<vec[i].second)
        {
            max_dead=vec[i].second;
        }
    }
    int fill[max_dead];
    int count=0,profit=0;
    for(int i=0;i<n;i++)
    {
        fill[i]=-1;
    }
    
    for(int i=0;i<n;i++)
    {
        int j=vec[i].second-1;
        
        while(j>=0 && fill[j]!=-1)
        {
            j--;
        }
        if(j>=0 && fill[j]==-1)
        {
            fill[j]=i;
            count++;
            profit+=vec[i].first;
        }
    }
    
    cout<<count<<" "<<profit;
    
    return 0;
}
