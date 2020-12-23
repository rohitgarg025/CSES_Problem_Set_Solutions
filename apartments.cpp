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
   ll n,m,k;
   cin >> n >> m >> k;
//    n ==> no of applicants
//    m ==> no of appartments
//    k ==> max difference allowed

    vector <ll> a(n,0);
    vector <ll> b(m,0);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    //sort both the arrays
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ans=0;
    int i=0; // bando mai
    int j=0; // apartments mai
    while(i<n){
        while (j<m && b[j]<a[i]-k) 
        {
            j++;
        }
        if(j<m && b[j] <= a[i]+k){
            ans++;
            j++;
        }
        
        i++;
    }

    cout << ans << endl;
    return 0;
}

