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
    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;

    if (total & 1)
    {
        //total is odd
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        vector <ll> arr1,arr2;
        total = total/2LL;
        while (n)
        {
            if(total>=n){
                arr1.push_back(n);
                total-=n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }

        cout << arr1.size() << endl;
        for (auto i: arr1)
        {
            cout << i << " ";
        }
        
        cout << endl;

        cout << arr2.size() << endl;
        for (auto i: arr2)
        {
            cout << i << " ";
        }
        
        cout << endl;
        
    }

    return 0;
}

/*
n numbers given 
divide in two set of equal sum

1 2 3 n=3 
1 2 3 4 n=4
1 2 3 4 5 n=5

*/