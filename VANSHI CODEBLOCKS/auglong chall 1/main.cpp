#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll h,p,count;
        cin >> h >> p;
         while(h>0&&p>0){
            h=h-p;
            p=p/2;
            }
            if(h>0)
        cout << "0" << endl;
            else
            cout << "1" << endl;
    }
    return 0;
}
