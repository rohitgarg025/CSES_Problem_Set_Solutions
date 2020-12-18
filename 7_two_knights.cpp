#include <bits/stdc++.h>
#define sq(a) ((a)*(a))
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int

using namespace std;

int main()
{
    FAST_IO;
    ll t;
    cin >> t;
    
    for(ll i=1;i<=t;i++){
        ll ans = ((sq(i)*(sq(i)-1)/2)-(8*(i-1)*(i-2)/2));
        cout <<  ans << endl;
    }

    // total posibilities = nc2
    // number of possibiites to be sub = 8*(n-1)*(n-2)/2
    
    

    return 0;
}