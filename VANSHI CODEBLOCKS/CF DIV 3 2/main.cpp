#include <bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin >> t;
    while(t--){
            ll n,i;
            cin >> n;
            ll a[n],b[n],count=0;
    for(i=0;i<n;i++)
        cin >> a[i];
     for(i=0;i<n;i++)
        cin >> b[i];
        ll mina=a[0];
         for(i=0;i<n;i++){
           if(a[i]<mina)
               mina=a[i];
                         }
            ll minb=b[0];
        for(i=0;i<n;i++){
           if(b[i]<minb)
               minb=b[i];
                         }
                         for(i=0;i<n;i++){
                                if(a[i]!=mina&&b[i]!=minb){
                                  if((a[i]-mina)>b[i]-minb)
                                    count+=a[i]-mina;
                                  else count+=b[i]-minb;}
                              else  if(a[i]!=mina)
                                count+=a[i]-mina;
                              else if(b[i]!=minb)
                                count+=b[i]-minb;
                                    }

            cout << count << endl;







    }
    return 0;
}
