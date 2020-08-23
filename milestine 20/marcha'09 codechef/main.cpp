#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int filter (int a[],int no)
{
    int i=0,sum=0;
    while(no>0){
        if(no&1)
            sum+=a[i];
       no=no>>1;
        i++;
           }
           return sum;
}
int main()
{
      ll t;
    cin >> t;
    while(t--){
        int a[20];
        ll n,k,flag=0;
        cin >> n >> k;
        for(int i=0;i<n;i++)
          cin >> a[i];

    int range=(1<<n)-1;
   for(int i=0;i<=range;i++)
    {
      if(filter(a,i)==k){
        flag=1;
      break;
      }
    }
    if(flag==1)
        cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
}

