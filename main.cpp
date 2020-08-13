#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

#define endl '\n'
#define ff first
#define ss second
#define sz(v) (int)v.size()
#define int long long
#define pb push_back
#define f(i,l,r) for(ll i=l;i<=r;i++)
#define rf(i,r,l) for(ll i=r;i>=l;i--)
#define Max 5000001
#define inf 2147483647
#define llinf 9223372036854775807
#define all(v) v.begin(),v.end()
#define bp(n) __builtin_popcountll(n)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

#define d0(a) cout<<a<<' ';
#define d1(a) cout<<a<<endl;
#define d2(a,b) cout<<a<<' '<<b<<endl;
#define d3(a,b,c) cout<<a<<' '<<b<<' '<<c<<endl;
#define d4(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
#define d5(a,b,c,d,e) cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
#define d6(a,b,c,d,e,f) cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<' '<<f<<endl;

const ll N=1e5+5,mod=1e9+7,bit=61;



signed main()
{
    fast;

    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        f(i,0,n-1)
        {
            cin>>a[i];
        }
        f(i,0,m-1)
        {
            cin>>b[i];
        }
        int ans;
        f(x,0,(1<<9)-1)
        {
            bool pos=1;
            f(i,0,n-1)
            {
                bool fd=0;
                f(j,0,m-1)
                {
                    int curr=(a[i]&b[j]);
                    if((curr|x)==x)
                    {
                        fd=1;
                        break;
                    }
                }
                if(!fd)
                {
                    pos=0;
                    break;
                }
            }
            if(pos)
            {
                ans=x;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
















