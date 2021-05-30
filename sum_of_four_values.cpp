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

int main()
{
    FAST_IO;
    int n, x;
    cin >> n >> x;

    vector <pair <int,int> > a;
    
    for (int i = 0; i < n; i++)
    {
        int x; cin >>x;
        a.pb({x,i+1});
    }

    map<int, vector <pair<int,int> > > umap;

    // fill the map with all x,y pairs combinations
    // sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++){
            umap[a[i].pf + a[j].pf].pb({a[i].ps, a[j].ps});
        }
    }


    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = a[i].pf + a[j].pf;
            // printf("%d",sum);
            if(umap.find(x - sum) != umap.end()){
                // printf("Yes");
                for(auto k : umap[x - sum]){
                    if(i+1 != k.pf && i+1 != k.ps && j+1 != k.pf && j+1 != k.ps){
                        // cout << k.pf << k.ps << i+1 << j+1 << endl;
                        vector <int> temp = {i+1,j+1,k.pf,k.ps};
                        set <int> s(temp.begin(), temp.end());
                        for(auto r: s){
                            cout << r << " ";
                        }
                        cout << endl;
                        return 0;
                    }
                }
            }
        }
    }
    

    cout << "IMPOSSIBLE" << endl;
    

// Alternative approach
// https://github.com/mrsac7/CSES-Solutions/blob/master/src/1642%20-%20Sum%20of%20Four%20Values.cpp





    return 0;
}