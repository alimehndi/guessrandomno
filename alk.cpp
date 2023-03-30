
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
	    int testcases;
	    cin>>testcases;
	    while(testcases--)
	    {
	        ll a ,b,c;
	        cin>>a>>b>>c;
	        if(a<b && b<c)
	        {
	            cout<<'0'<<endl;
	        }
	        else
	        {
            ll low =0;
            ll ans= -1;
            ll high = (1ll<<30) -1;
            while(low <=high)
            {
               int indx = (low+high)/2;
               ll p= a^indx;
               ll q= b^indx;
               ll r=c^indx;
               if(p<q && q <r)
               {
                // cout<<p<<" "<<q<<" "<<r<<endl;
                  ans = indx;
                  break;
               }
               else if(p<q)
               {
                high = indx-1;           
               }
               else
               {
                low = indx+1;                 
               }
            }
            cout<<ans<<endl;

	        }
	        
	    }
	return 0;
}
