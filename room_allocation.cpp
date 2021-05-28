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
    int n;
    cin >> n;
    // [a,b,c] -> a stores arrival time, b stores dept time, c stores index
    vector <pair <pair <int,int>,int> > customers(n);
    for(int i=0;i<n;i++){
        cin >> customers[i].first.first >> customers[i].first.second;
        customers[i].second = i;

    }

    // sort them based on arrival time
    sort(customers.begin(), customers.end());

    //room assigned to each customer
    vector <int> ans(n,-1);

    int roomid = 1;

    // make a priority queue with [departure times, room occupied]
    priority_queue <pair<int,int>, vector<pair <int,int> >, greater<pair<int,int> >  > rooms;

    for (int i = 0; i < n; i++)
    {
        if(rooms.size() == 0){
            // if queue is empty
            // allot this man last room
            ans[customers[i].second] = roomid++;
            // fill this entry in the queue
            rooms.push(make_pair(customers[i].first.second, roomid-1));

         }
         else{
            //  if queue is not empty
             if(rooms.top().first < customers[i].first.first){
                //  if arrival time of guest is later than departure time of the resident then his room can be alloted to the guest
                 ans[customers[i].second] = rooms.top().second;
                 pair <int,int> x = rooms.top();
                 rooms.pop();
                 rooms.push(make_pair(customers[i].first.second, x.second));

             }
             else{
                //  else he will be allocated a new room 
                 ans[customers[i].second] = roomid++;
                 rooms.push(make_pair(customers[i].first.second, roomid-1));
             }
         }         
    }
    

    cout << roomid-1 << endl;

    for(int i=0;i<n;i++){
       cout << ans[i] << " ";
    }

    cout << endl;


}

int main()
{
    FAST_IO;
    int n;
    cin >>n;
    vector <pair <int,int> > in(n), out(n);

    set <int> free;

    for(int i=0;i<n;i++){
        cin >> in[i].first;
        cin >> out[i].first;
        in[i].second = out[i].second = i;
        free.insert(i);
    }

    sort(in.begin(), in.end());
    sort(out.begin(), out.end());
    
    vector <int> ans(n);

    for(int i=0,j=0;i<n;i++){
        while(j<n && out[j].first < in[i].first){
            free.insert(ans[out[j].second]);
            j++;
        }

        ans[in[i].second] = *free.begin();
        free.erase(free.begin());
    }

    int k = *max_element(ans.begin(), ans.end()) + 1;
    cout << k << endl;

    for(int i=0;i<n;i++){
        cout << ans[i] + 1 << " ";
    }

    return 0;
}