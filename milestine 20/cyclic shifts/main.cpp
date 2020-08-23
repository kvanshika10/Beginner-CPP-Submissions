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
     dec+=((s1[i]-48)*base);
     base=base*2;
  }

    return dec;
}




int main()
{
   ll t;
   cin >> t;
   while(t--){
      ll n,m,i,j=0;
      cin >> n >> m;
      char a;
      cin >> a;
      string s1="";

      while(n>0)
      {

          int x=n%2;
          if(x==0)
            s1+='0';
         else s1+='1';
          n=n/2;
          i++;
      }
      string s2="";
      string s3="";
      ll k=s1.size();
    ll r=16-s1.size();

       while(r--){
          s1+='0';
       }
      for(i=15;i>=0;i--)
      {
          s2+=s1[i];

      }
      cout << s2 << endl;
if(a=='L')
    {
       s3=s2.substr(0,m);
       s2.erase(0,m);
       s2+=s3;
     cout << binary(s2) << endl;
    }else{
        s3=s2.substr(16-m,m);
         s2.erase(16-m,m);
         s2.insert(0,s3);
         cout << binary(s2) << endl;
        }

   }
}
