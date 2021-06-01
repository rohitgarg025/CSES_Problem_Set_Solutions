// Subarray Divisibility

// Subarray Sums 1

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

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mod[n];
    memset(mod, 0, sizeof(mod));

    int cumsum=0;

    for (int i = 0; i < n; i++)
    {
        cumsum += a[i];
        mod[((cumsum % n) + n) % n]++;
    }

    int result=0;
    for(int i=0;i<n;i++){
        if(mod[i] > 1){
            result += (mod[i]*mod[i]-1)/2;
        }

        result += mod[0];
    }


    cout << result << endl;


}

void errichto(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector <int> mod(n,0);
    int sum=0;
    for (size_t i = 0; i < n; i++)
    {
        sum += (a[i]%n + n)%n;
        mod[sum%n]++;
    }

    int result = mod[0];
    for (size_t i = 0; i < n; i++)
    {
        result += (mod[i]*mod[i]-1)/2;

    }

    cout << result << endl;
    


    

    

}
int main()
{
    FAST_IO;

    auto start = std::chrono::high_resolution_clock::now();

    // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);

    // // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);

    
    // solve();
    errichto();
    

    auto finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = finish - start;
    // std::cout << "Elapsed time: " << elapsed.count() << " s\n";

    return 0;
}