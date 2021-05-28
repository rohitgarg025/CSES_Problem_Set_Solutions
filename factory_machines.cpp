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
void solve(){
    // input

    // priority queue implementation 
    int n,t;
    cin >> n >> t;
    vector <int> v(n);
    // min heap of pairs
    priority_queue<pair<int,int>, vector<pair <int,int> >, greater<pair<int,int> > > pq;

    for(int i=0;i<n;i++){
        int x; 
        cin >> x;
        v[i] = x;
        pq.push({x,i});
    }

    int count = 0;

    while(!pq.empty()){
        pair <int,int> x = pq.top();
        pq.pop();
        count++;
        if(count == t){cout << x.first << endl; return ;}
        pq.push({x.first + v[x.second],x.second});
    }
    
    // M2 (0-2) M1(0-3) M3(0-5) M2(2-4) M1(3-6) M2(4-6) M2(6-8)
    // Input:
    // 3 7
    // 3 2 5

    // Output:
    // 8

    // Explanation: Machine 1 makes two products, machine 2 makes four products and machine 3 makes one product.


    
}

void solution(){
    //brute force solution
    // go through all the time and __check
    // may go to 10^18 time

    // binary search implementation
    //because of predicate 

    int n,m;
    cin >> n >> m;
    vector <int> machines(n);
    for(int i=0;i<n;i++){
        cin >> machines[i];
    }

    ll low = 0;
    ll high = 1e18;
    ll answer = 1e18;

    while(low <= high){
        ll mid = (low+ high)/2;
        ll products = 0;
        for(int i=0;i<n;i++){
            products += min(mid/machines[i],(ll)1e9);
        }

        if(products >= m){
            if(mid < answer)
                answer = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }

    cout << answer << endl;
}

int main()
{
    FAST_IO;
    // solve();
    solution();
    return 0;
}