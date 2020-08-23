#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    vector<int>v1;
    for(i=0;i<n;i++)
    {
        cin >> v1[i];
        cnt[v1[i]]++;
    }
    cin >> q;

    while(q--){
            string s1;
           cin >> s1;
           if(s1[0]=='+'){
            int x=stoi(s1);
            v1.pushback(x);
           cnt[x]++;
                    }
            if(v1.size()<8){
                cout << "NO" << endl;
                continue;
                  }else{

        for(i=0;i<n;i++){
            if(cnt[v1[i]]/2>3){
            cout << "YES" << endl;
             break;
            }else if(cnt[v1[i]/2<3){
                  if(cnt[v1[i]/2==3)




    }
    return 0;
}
