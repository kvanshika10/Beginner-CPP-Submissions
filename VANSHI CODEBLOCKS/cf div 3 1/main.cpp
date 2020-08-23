#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--){
             ll n,i;
             cin >> n;
             ll a[n],flag=0;
             for(i=0;i<n;i++)
              cin >> a[i];
              sort(a,a+n);
              for(i=0;i<n-1;i++){
                if((abs(a[i+1]-a[i]))>1){
                    flag=1;
                  break;
                                      }
                      }
                      if(flag==1)
                        cout << "NO" << endl;
                      else cout << "YES" << endl;



    }
    return 0;
}
