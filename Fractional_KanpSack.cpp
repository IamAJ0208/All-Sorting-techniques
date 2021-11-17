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
    return (a.second/a.first)>(b.second/b.first);
}


int main()
{
    
    vector<pair<int,int>> vec;
    
    int n;
    int pro,wei;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>wei>>pro;
        vec.push_back(make_pair(wei,pro));
    }
    int knap;
    cin>>knap;
    
    sort(vec.begin(),vec.end(),compare);
    
    int profit=0;
    for(int i=0;i<n;i++)
    {
        if(knap>0)
        {
            if(knap>=vec[i].first)
            {
                knap=knap-vec[i].first;
                profit+=vec[i].second;
                
            }
            else if(knap<vec[i].second)
            {
                profit=profit+(vec[i].second/vec[i].first)*knap;
                knap=0;
            }
        }
    }
    
    cout<<profit<<endl;
    
    return 0;
}
