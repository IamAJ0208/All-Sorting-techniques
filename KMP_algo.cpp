/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string text;
    cin>>text;
    int len[text.length()];
    int i=1;
    int p=0;
    len[0]=0;
    while(i!=text.length())
    {
        
        if(text[i]==text[p])
        {
            p++;
            len[i]=p;
            i++;
        }
        else
        {
            len[i]=0;
            p=0;
            i++;
        }
    }
    
    string main;
    cin>>main;
    
    int n=main.length();
    i=0;
    int j=0;
    int m=text.length();    
    while(i<n)
    {
        if(text[j]==main[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<"\npattern found from "<<i-j<<" "<<i;
            j=len[j-1];
            i++;
        }
        else if(text[j]!=main[i])
        {
            if(len[j]!=0)
            {
                j=len[j-1];
            }
            else
                i++;
        }
    }
    
    return 0;
}
