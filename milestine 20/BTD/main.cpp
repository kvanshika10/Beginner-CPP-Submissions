#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll binary(string s1)
{
    ll n=s1.size();
    ll base=1;
    ll dec=0;
  for(ll i=n-1;i>=0;i--)
  {
     dec+=(s1[i]*base);
     base=base*2;
  }

    return dec;
}


int main()
{
    string s1="00110";
     ll n=s1.size();
    ll base=1;
    ll dec=0;
  for(ll i=n-1;i>=0;i--)
  {
     dec+=((s1[i]-48)*base);
     base=base*2;
     cout << dec << endl;
  }

    return 0;
}
