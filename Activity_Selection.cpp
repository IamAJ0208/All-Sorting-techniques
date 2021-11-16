/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;


int main()
{
    
    vector<pair<int,int>> vec;
    
    int n;
    
    cin>>n;
    int s,e;
    
    for(int i=0;i<n;i++)
    {
        cin>>s>>e;
        vec.push_back(make_pair(e,s));
    }
    sort(vec.begin(),vec.end());
    
    int count=0,tim_e=-1;
    for(int i=0;i<n;i++)
    {
        if(tim_e<vec[i].second)
        {
            count++;
            tim_e=vec[i].first;
        }
    }
    cout<<count;
    return 0;
}
