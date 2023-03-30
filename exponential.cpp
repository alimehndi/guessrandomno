#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        if(n%2 ==1)
         cout<<-1<<endl;
        else
         cout<<1<<" "<<n/2<<endl;; 
    }


    return 0;
}