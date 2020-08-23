#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
            ll n,i,count=0,j;
           cin >> n;
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                if((i^j)<=n)
                  count++;
                             }
                        }
                        cout << count << endl;
    }
    return 0;
}
