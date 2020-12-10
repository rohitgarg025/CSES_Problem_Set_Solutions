#include <bits/stdc++.h>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int

using namespace std;

int main()
{
    FAST_IO;
    ll n;
    cin >> n;
    
    vector <ll> a(n,0);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    //5
    //3 2 5 1 7
    ll ans=0;

    for (int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1]){
            ans = ans + (a[i-1]-a[i]);
            a[i] = a[i-1];
        }
    }

    cout << ans << endl;
    

    return 0;
}