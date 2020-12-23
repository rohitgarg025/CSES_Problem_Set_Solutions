#include <bits/stdc++.h>
#define sq(a) ((a) * (a))
#define pb(a) push_back(a)
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int


using namespace std;

int main(){
    ll n;
    cin >> n;
    set <ll> s;

    ll x=0;
    for(int i=0;i<n;i++){
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl; 



    return 0;
}

