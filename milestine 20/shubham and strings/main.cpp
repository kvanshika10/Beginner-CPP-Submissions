#include <bits/stdc++.h>

using namespace std;
#define ll long long int



int main()
{
   ll t;
   cin >> t;
   while(t--){
        ll n,i,count=0;
       cin >> n;

     string s1;
     cin >> s1;
     for(i=0;i<n;i++){
        if(s1[i]=='0')
            count++;
                 }
                 cout << count << endl;
   }
    return 0;
}

