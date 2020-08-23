#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--){
         ll n;
         cin >> n;
         if(n%2==0)
         cout << n+1 << endl;
         else {
              ll temp=n,i=0;
              while((temp&1)!=0)
              {
                   i++;
                 temp=temp >> 1;
              }
             ll ans=n|(1<<i);
              cout << ans << endl;

         }
    }
    return 0;
}
