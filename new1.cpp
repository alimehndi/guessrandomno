#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
       long int n;
       cin>>n;
       unsigned long  long int arr[n];
       unsigned long long int barr[n];
       for(unsigned long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(unsigned long long int i=0;i<n;i++)
        {
            cin>>barr[i];
        }         
        vector<unsigned long long int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                ans[j]=ans[j]+min(arr[i],barr[j]);
                arr[i]=arr[i]-min(arr[i],barr[j]);
            }
        }
        for(unsigned long long int i=0;i<n;i++)
          cout<<ans[i]<<" ";
          cout<<endl;               

    } 
 
    
    return 0;
}