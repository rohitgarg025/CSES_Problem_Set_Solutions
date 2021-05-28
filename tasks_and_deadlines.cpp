#include <bits/stdc++.h>
#define sq(a) ((a)*(a))
#define mp make_pair
#define pb push_back
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int

using namespace std;

int main()
{
    FAST_IO;
    int n;
    cin >> n;
    vector <pair <int,int> > v(n);

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v[i] = {a,b};
    }

    // sort according to less time taking tasks first
    sort(v.begin(), v.end());

    ll curr =0;
    ll total = 0;

    for(int i=0;i<n;i++){
        curr += v[i].first;
        total += v[i].second - curr;
    }

    cout << total << endl;

    return 0;

    // (6,10) (1,15)
    // 4 + 8 = 12

    // (1,15) (6,10)

    // 14 + 3 = 17
}