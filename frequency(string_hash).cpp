#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    vector<pair<int,int>> vec;
    
    int n;
    cin>>n;
    
    char s[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    
    map<char,int> m;
    map<char,int>::iterator itr;
    
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" - "<<itr->second<<endl;
    }
    
    return 0;
}