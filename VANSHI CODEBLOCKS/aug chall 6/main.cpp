#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const unsigned int m = 1000000007;

int main()
{
    ll t;
    cin >> t;
    while(t--){
              ll n,i,j,temp=1,k;
              cin >> n;
              ll a[n],b[n];
              for(i=0;i<n;i++)
                cin >> a[i];
            for(j=0;j<n-1;j++)
                temp=(temp*2)%m;

       for(i=0;i<n;i++){
        cout << temp << " ";
          temp=temp/2;
       }
     cout << endl;
    }
    return 0;
}
