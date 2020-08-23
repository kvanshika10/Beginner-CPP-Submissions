#include <bits/stdc++.h>

using namespace std;
#define ll long long int

void filter (char a[],int no)
{
    int i=0;
    while(no>0){
        if(no&1)
            cout << a[i];
        else cout << "";
       no=no>>1;
        i++;
           }
           cout << endl;
}
int main()
{
    char a[50]="abc";
    int n=strlen(a);
    int range=(1<<n)-1;


    for(int i=0;i<=range;i++)
    {
      filter(a,i);
    }
    return 0;
}
