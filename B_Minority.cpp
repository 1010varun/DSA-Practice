//🎃🎃🎃😎😎😁🤓☣☣☣☣☣dark_coder☣☣☣☣☣🤓😁😎😎🎃🎃🎃
#include <bits/stdc++.h>
using namespace std;
#define IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define li long long int
#define pi pair<int,int>
#define lcm(a, b) (a / __gcd(a, b) * b)
const long long INF = 1e9+7;
const long long MOD = 998244353;
long long power(long long a, long long b){
long ans=1;
while(b>0){
if(b&1)
ans=(ans*a)%INF;
a=(a*a)%INF;
b>>=1;   
}
return ans%INF;
}
int solve(){
        string s;cin>>s;
        int z=0,o=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1')o++;
            else z++;
        }
        if(z==o){cout<<z-1<<endl;return 0;}
        cout<<min(o,z)<<endl;
        
    return 0;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}