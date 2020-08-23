#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--){
              ll pc,pr;
              cin >> pc >> pr;
              if(pc%9==0)
                pc=pc/9;
              else pc=(pc/9 +1);
              if(pr%9==0)
                pr=pr/9;
              else pr=(pr/9 +1);

                if(pc<pr)
                cout << "0" << " " << pc << endl;
              else
                cout << "1" << " " << pr << endl;


    }
    return 0;
}
