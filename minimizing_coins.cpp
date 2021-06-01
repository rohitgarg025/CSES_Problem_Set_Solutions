// Minimizing Coins

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


ll sum(vector <int> &coins, int x){
    vector <ll> dp(x+1,INT_MAX);
    // dp[i] = min number of coins required to produce sum i
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if(i-coins[j]>=0){
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
        
    }

    if(dp[x] == INT_MAX){
        dp[x] = -1;
    }

    return dp[x];
    

}
void solve()
{
    int n,x;
    cin >> n >> x; 
    vector <int> coins(n);
    for(auto &it : coins){
        cin >> it;
    }

    // for(auto it : coins){
    //     cout << it << " ";
    // }

    cout << sum(coins, x) << endl;


    

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
#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 
int coins[101];
int dp[1000001];
int main()
{
	int n , x;
	cin>>n>>x;
	
	REP(i , n) cin>>coins[i];
	
	REP(i , x) dp[i] = INF;
	
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=n;j++)
		if(i - coins[j] >= 0)
		dp[i] = min(dp[i] , dp[ i - coins[j] ] + 1);
	}
	
	if(dp[x] == INF) dp[x] = -1;
	
	cout<<dp[x];
}
 
 
*/