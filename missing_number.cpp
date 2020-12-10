#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long int

using namespace std;

int main(){
    FAST_IO;
    ll n;
    cin >> n;
    ll sum=0;
    ll x;
    for(int i=0;i<n-1;i++){
        cin >> x;
        sum = sum + x;
    }

    ll total = (n*(n+1))/2;
    ll result = total-sum;
    cout << result << endl;

    return 0;
}