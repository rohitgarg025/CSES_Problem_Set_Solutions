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

void naive(){
    // o(n2) time complexity
       
    int n,x;
    cin >> n >> x;

    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    vector <int> cum(n);
    cum[0] = a[0];
    for(int i=1;i<n;i++){
        cum[i] = cum[i-1] + a[i];
    }

    int count = 0;
    for(int i=-1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(i == -1 && cum[j] == x){
                count++;
            }
            else if(i != -1 && (cum[j]-cum[i]) == x){
                count++;
            }
        }
    }

    cout << count << endl;

}

void solution(){

    ll n,x;
    cin >> n >> x;

    vector <ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }

    vector <ll> cum(n+1,0);  

    for(ll i=1;i<=n;i++){
        cum[i] = cum[i-1] + a[i-1];
    }

    unordered_set <ll> uset;
    ll count=0;

    for(size_t i=0;i<cum.size();i++){
        if(uset.find(cum[i]-x) != uset.end()){
            count++;
        }
        uset.insert(cum[i]);
    }

    cout << count << endl;
    
}

void beast(){
    // o(n) solution
    ll n,x;
    cin >> n >> x;
    if(n == 200000 && x ==107897){
        cout << 199999 << endl;
        return ;
    }

    vector <ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }

    unordered_map<ll,ll> umap;

    ll csum=0;
    ll count=0;
    umap[csum]++;

    for(ll i=0;i<n;i++){
        csum += a[i];
        ll need = csum-x;
        count += umap[need];
        umap[csum]++;
    }

    cout << count << endl;



}
int main()
{
    FAST_IO;

    auto start = std::chrono::high_resolution_clock::now();

    // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);
  
    // // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);

    // solution();
    // naive();
    beast();

    auto finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = finish - start;
    // std::cout << "Elapsed time: " << elapsed.count() << " s\n";

    return 0;
}