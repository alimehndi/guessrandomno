
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int testcases;
   cin>>testcases;
   while(testcases--)
   {
    ll n;
    ll q;
    cin>>n>>q;
    vector<ll> vec;
    ll a;
    cin>>a;
    vec.push_back(a);
    for(int i=1;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
        vec[i]=vec[i]+vec[i-1];
    }
    for(int i=0;i<q;i++)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        l--;
        r--;
        ll as=0;
        if(l!=0)
          as = vec[r]-vec[l-1];
        else
          as = vec[r];
        ll bs = vec[n-1]-as+(r-l+1)*k;
       // cout<<as<<" "<<bs<<" "<<l-r+1<<endl;
        if(bs%2 ==1)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl; 


    }
   }
return 0;

}
