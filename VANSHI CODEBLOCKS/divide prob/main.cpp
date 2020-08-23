#include <bits/stdc++.h>

using namespace std;
#define  ll long long int

int main()
{
  ll t;
  cin >> t;
  while(t--){
      ll n,count=0;
      cin >> n;
      if(n<3){
      cout << "-1" << endl;
      continue;
      }
     if(n%4==0)
     count+=(n/4)*(n/4)*(n/4)*(n/4);
     else if(n%2==0)
     count+=(n/4)*(n/4)*(n/4+1)*(n/4+1);
     else count+=(n/4)*(n/4)*(n/4)*(n/4+1);
     cout << count << endl;
  }
}


















/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

