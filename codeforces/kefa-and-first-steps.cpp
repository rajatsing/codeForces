#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    ll i=0;
    ll flag=1,maxi=1;
    cin >> t;
    ll a[t];
   for( i = 0; i < t; i++)
   {
        cin >> a[i];
   }

    for( i = 1; i < t; i++)
    {
        if (a[i] >= a[i-1]) {
            flag++;
            maxi = max(maxi,flag);
        }
        else
        {
            flag = 1;
        } 
    }
    cout << maxi << endl;
    
    
}