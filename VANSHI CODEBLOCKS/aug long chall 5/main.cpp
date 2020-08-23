#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
            ll n,k,i,j,start=0,count=1;
           cin >> n >> k;
           ll a[n];
           for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++){
            for(j=start;j<i;j++){
                if(a[i]==a[j]){
                    count++;
                    start=i;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
