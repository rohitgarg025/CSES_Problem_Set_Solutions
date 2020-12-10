#include <bits/stdc++.h>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int

using namespace std;

int main()
{
    FAST_IO;
    string s;
    cin >> s;
    
    ll count=1;
    ll max_count=1;

    char c = s[0];
    for(size_t i=1;i<s.length();i++){
        if(s[i] == c){
            count++;
        }
        else{
            c = s[i];
            max_count = max(max_count,count);
            count=1;
        }
    }

            max_count = max(max_count,count);




    cout << max_count << endl;

}