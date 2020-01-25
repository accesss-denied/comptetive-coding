

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
const int sz=1e7;
#define mod 1000000007
#define ull unsigned long long int
vector<string>arr;
ll dis[100005];
bool vis[100005];
int bfs(ll n,ll k)
{
    queue<ll>q;
    q.push(0);
    dis[0]=0;
    vis[0]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        vis[x]=true;
        for(int i=0;i<n;i++){
            if(arr[x][i]=='1' and abs(i-x)<=k){
                if(!vis[i] and arr[i][i]=='1')
                vis[i]=1,dis[i]=dis[x]+1,q.push(i);
            }
        }
    }
    return dis[n-1];
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){

        ll n,k;
        cin>>n>>k;
        string s;
        
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            arr.push_back(x);
        }
        for(int i=0;i<=100004;i++) dis[i]=INT_MAX,vis[i]=0;
        if(bfs(n,k)==INT_MAX) cout<<-1<<endl;
        else cout<<bfs(n,k)<<endl;
        arr.clear();
    }
    return 0;

}
