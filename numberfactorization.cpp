
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int testcases;
cin>>testcases;
while(testcases--)
{
    long int n;
    cin>>n;
    queue<pair<int,int>> q,q2;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {int count =0;
            while(n%i == 0)
            { 
             count++;
             n=n/i;

            }
            q.push({i,count});
        }
    }
    int ans =0;
    int sum;
    if(n>1)
     q.push({n,1});
    while(q.empty() == false)
    {
       sum =1;
       while(q.empty() == false)
       {
        sum  = sum * q.front().first;
        if(q.front().second > 1)
         q2.push({q.front().first,q.front().second -1});   
       q.pop();
       }
       ans = ans + sum;
       while(q2.empty()== false)
       {
        q.push(q2.front());
        q2.pop();
       }
    }      
    cout<<ans<<"\n";
}


}
