#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
               ll  n,k,i,flag=0,min=k,ans;
               cin >> n >> k;
              ll a[n];
              for(i=0;i<n;i++)
                  cin >> a[i];
                  sort(a,a+n);
                for(i=0;i<n;i++){
                    if(k%a[i]==0&&k/a[i]<min){
                        min=k/a[i];
                        ans=a[i];
                        flag=1;
                    }else if(a[i]>k)
                             break;
                                }

            if(flag==0)
            cout << "-1" << endl;
            else
                    cout << ans << endl;
    }

    return 0;
}
