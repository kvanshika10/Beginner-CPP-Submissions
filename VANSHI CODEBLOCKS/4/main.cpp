#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const unsigned ll m = 1000000007;
ll pw[500001] ={ 0 };
void power()
{
    pw[0]=1;
    for (ll i=1;i<=500000;i++)
    {
        pw[i] = (pw[i-1] * 2)%m;
    }
}

int main()
{
    ll t;
    cin >> t;
    power();
    while(t--){
              ll n,i,j,x;
              cin >> n;
              ll a[n];
              for(i=1;i<=n;i++){
                cin >> x;
                cout << pw[n-i] << " ";
              }

     cout << endl;
    }
    return 0;
}


