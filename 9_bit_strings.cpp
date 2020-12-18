#include <bits/stdc++.h>
#define sq(a) ((a) * (a))
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int

using namespace std;

int main()
{
    FAST_IO;
    //input n
    int n;
    cin >> n;

    //num of strings 2^n

    long long ans = pow(2,n);
    cout << ans%1000000007 << endl;

 
    return 0;
}

