#include <bits/stdc++.h>
#define sq(a) ((a) * (a))
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
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        a.push_back({y, i + 1});
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        int j = i + 1;
        int k = a.size() - 1;
        if (i != j && j != k && k != i && j<n)
        {
            while (j < k)
            {
                // cout << a[i].first << " " << a[j].first << " " << a[k].first << endl;
                
                int sum = a[i].first + a[j].first + a[k].first;

                // cout << sum << endl;

                if (sum == x)
                {
                    vector <int> v = {a[i].second, a[j].second, a[k].second}; 
                    sort(v.begin(), v.end());
                    for(int i=0;i<v.size();i++){cout << v[i] << " ";}
                    cout << endl;
                    return 0;
                }
                else if (sum > x)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
    }


    cout << "IMPOSSIBLE" << endl;

    return 0;
}
