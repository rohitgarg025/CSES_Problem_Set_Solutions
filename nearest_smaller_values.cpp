#include <bits/stdc++.h>
#define sq(a) ((a) * (a))
#define mp make_pair
#define pb push_back
#define pf first
#define ps second
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int

using namespace std;

void naive(){
    
}

int main()
{
    FAST_IO;
    int n; cin >> n;
    vector <int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    vector <int> ans(n,0);

    for(int i=0;i<n;i++){
        if(upper_bound(x.begin(),x.end(),x[i]) != x.end()){
            ans[upper_bound(x.begin(),x.end(),x[i]) - x.begin()] = i;
        }
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}