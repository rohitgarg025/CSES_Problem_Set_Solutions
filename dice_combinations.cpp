// Dice Combinations

#include <bits/stdc++.h>
#define sq(a) ((a) * (a))
#define mp make_pair
#define pb push_back
#define pf first
#define ps second
#include <chrono>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int
// #define mod 1000000007

using namespace std;

ll dice(ll n){
    if(n<0){
        return 0;
    }
    if(n == 1 || n == 0){
        return 1;
    }

    return dice(n-1) + dice(n-2) + dice(n-3) + dice(n-4) + dice(n-5) + dice(n-6);

}


ll dice_bottom_up(ll n){
    vector<int> dp(n+1,0);
    int mod = 1e9+7;
    dp[0]=1;
    dp[1]=1;

    for (int i = 2; i <= n; i++)
    {
        
        for (int j = 1; j <= 6; j++)
        {
            if(i-j>=0){
                (dp[i] += dp[i-j])%= mod;
            }
            
        }

    }
    
    return dp[n];

}

void solve()
{
    ll n;
    cin >> n;
    cout << dice_bottom_up(n) << endl;
}

int main()
{
    FAST_IO;

    auto start = std::chrono::high_resolution_clock::now();

    // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);

    // // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);

    solve();
    

    auto finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = finish - start;
    // std::cout << "Elapsed time: " << elapsed.count() << " s\n";

    return 0;
}


/*
Link to editorial: https://codeforces.com/blog/entry/70018
*/