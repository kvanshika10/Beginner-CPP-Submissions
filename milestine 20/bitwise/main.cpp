#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n,i,result=0;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
        cin >> a[i];

    for(i=0;i<n;i++)
      result=result^a[i];
      int temp=result;
       i=0;
      while(temp>0){
        if(temp&1)
            break;
            else{
              i++;
               temp=temp>>1;
            }
      }
    int mask=1<<i;
    int firstno=0;
    for(i=0;i<n;i++)
    {
        if((mask&a[i])!=0)
        firstno= firstno^a[i];
    }
    cout << firstno << endl;
    int secondno=result^firstno;
    cout << secondno << endl;
        return 0;
}
