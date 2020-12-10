#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long int

using namespace std;

int main(){
    FAST_IO;
    ll n;
    cin >> n;

    while(n>1){
        cout << n << " ";
        if(n%2==0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
    }

    cout << n << endl;

    return 0;
}