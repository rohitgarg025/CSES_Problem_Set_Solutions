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
    //input n
    string s;
    cin >> s;
    
    int n = s.length();
    
    //store counts of characters
    unordered_map <char,int> hmap;
    for(int i=0;i<n;i++){
        hmap[s[i]]++;
    }

    bool flag=false;
    for(auto i:hmap){
        if(i.second !=1){
            flag = true;
            break;
        }
    }
    if(!flag and n>1){
        cout << "NO SOLUTION" << endl;
        return 0;}

    //count the odd occurences
    int count=0;
    char character;
    for(auto i:hmap){
        if(i.second&1){
            count++;
            character = i.first;
        }
    }

    if(n%2==0 && count>=1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }



    

    string fh;
    string sh;
    for(auto i:hmap){
        string cc(i.second/2,i.first);

        fh = fh+cc; // add in the end of first half
        sh = cc+sh; //add in the beginning of second half
    }

    string ans = (count == 1)?(fh+character+sh):(fh+sh);

    cout << ans << endl;

    return 0;
}

