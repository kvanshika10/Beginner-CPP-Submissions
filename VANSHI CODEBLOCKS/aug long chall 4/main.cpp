
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);

       ll t;
      cin >> t;
    while(t--){
           string s1,s2,s3;
           ll i,j;
           cin >> s1 >> s2;
           for(i=0;i<s2.size();i++)
           {
               ll index=s1.find(s2[i]);
                 s1.erase(index,1);    //erases the letters of substring s2 from s1
           }
           sort(s1.begin(),s1.end());  // sorts the remaining string

         for(i=0;i<s1.size()&&s1[i]<=s2[0];i++)
        {
                 j=0;
             if(s1[i]==s2[0]){
               if(s1[i]==s2[j+1])
               {
                  while(s1[i]==s2[j+1]&&j<s2.size())
                    j++;
               }
               if(j<s2.size()&&s1[i]>s2[j+1])
                   break;
                             }

        }
           if(i==s1.size())
              s1+=s2;
           else
           s1.insert(i,s2);  // inserts the substring
           cout << s1 << endl;


    }
    return 0;
}
