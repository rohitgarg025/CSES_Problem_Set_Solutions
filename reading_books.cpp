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

    // v[i] denotes time taken to read ith book completely
    vector <int> books(n);

    ll sum = 0;
    ll m = INT_MIN;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        sum += x;
        m = max((ll)x,m);
    }

    //ans will be greater of sum and twice of 
    m = max((ll)(2*m),sum);

    cout << m << endl;

    return 0;
}

/*
2 8 3
2 3
8 2
3 8

5 4 8 = 17 > 2*8
5 8
4 5
8
*/