#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;

#define  Infile         freopen("input.txt", "r", stdin)
#define  Outfile        freopen("output.txt", "w", stdout)
#define  show(a)        cerr<<"\n-> "<<#a<<" = "<<a<<endl
#define  fu(i,a,b)      for(ll i=(a); i<=ll(b);++i)
#define  fd(i,a,b)      for(ll i=(a); i>=ll(b);--i)
#define  fo(i,n)        for(ll i=0; i<ll(n);++i)
#define  grter(u)       u,vector<u>,greater<u> 
#define  fixset(x)      fixed<<setprecision(x)
#define  ms(a, x)       memset(a,x,sizeof(a))
#define  all(x)         (x).begin(),(x).end()
#define  mp(a,b)        make_pair(a,b)
#define  pb(x)          push_back(x)
#define  pr(a)          cout<<a<<endl
#define  prs(a)         cout<<a<<" "
#define  ar(x, n)       (x),(x)+(n)
#define  _              <<", "<<
#define  fii            first
#define  see            second
#define  endl           '\n'

typedef double db;
typedef long long ll;
typedef vector <ll> vii;
typedef pair <ll, ll> pll;

clock_t TimeBegin, TimeEnd;
ll LX[] = {-1,0,0,1,-1,-1,1,1}; // 4 - 8
ll LY[] = {0,-1,1,0,-1,1,-1,1}; 
ll const INF = 1e18;
db const EPS  = DBL_EPSILON;


inline void Tstop();
inline void Tstart();
inline ll eulerPhi(ll NUM);
inline ll mnmize(ll& a,ll b);
inline ll mxmize(ll& a,ll b);
inline ll mod(string NUM, ll BASE);
inline ll fpow(ll Aa, ll Ax, ll BASE);
inline ll diMod(ll Aa, ll Bb, ll BASE);
inline ll mulMod(ll Aa, ll Bb, ll BASE);
inline string toString(ll NUM);


//Declare Here


//============//

void Solve()
{
    //code here
    
    
}


//=============================================================================//

int main()
{
    ios::sync_with_stdio(0); 
    //cin.tie(0); cout.tie(0);

    #ifdef RAVENCLAW
        Tstart();
        //Infile;
        //Outfile;
    #endif
        Solve();
        Tstop();
    return 0;
}

//=============================================================================//
//=============================================================================//

inline ll mod(string NUM, ll BASE) 
{ 
    ll RES = 0; 
    fo(i, NUM.length()) 
        RES = (RES*10 + (ll)NUM[i] - '0') % BASE;
    return RES; 
} 

ll fpow(ll Aa, ll Xx, ll BASE)
{
    ll res = 1;
    ll temp = Aa%BASE;
    while(Xx > 0)
    {
        if (Xx&1)
            res = (res*temp)%BASE;
        Xx >>= 1;
        temp = (temp*temp)%BASE;
    }
    return res;
}

inline ll diMod(ll Aa, ll Bb, ll BASE)
{
    //(A/B)%Base
    ll result = (Aa * fpow(Bb, BASE-2, BASE)) % BASE; 
    return result;
}

inline ll mulMod(ll Aa, ll Bb, ll BASE)
{
    Aa %= BASE;
    Bb %= BASE;
    ll Qq = ((long double)Bb / BASE)*Aa;
    ll Rr = Aa * Bb - Qq * BASE;
    return (Rr % BASE + BASE) % BASE;
}

inline ll eulerPhi(ll NUM)   // O(sqrt(n))
{
    if (NUM == 0) 
        return 0;
    ll RESULT = NUM;
    for (ll TMPX = 2; TMPX*TMPX <= NUM; ++TMPX) 
    {
        if (NUM % TMPX == 0) 
        {
            RESULT -= RESULT / TMPX;
            while (NUM % TMPX == 0) 
                NUM /= TMPX;
        }
    }
    if (NUM > 1) RESULT -= RESULT / NUM;
        return RESULT;
}

inline string toString(ll NUM) 
{
    stringstream sss; sss << NUM;
    return sss.str();
}    

inline ll mnmize(ll& a,ll b)
{
    return a = (a > b ? b : a);
}

inline ll mxmize(ll& a,ll b)
{
    return a = (a < b ? b : a);
}

inline void Tstart()
{
    TimeBegin = clock();
}

inline void Tstop()
{
    #ifdef RAVENCLAW
    TimeEnd = clock();
    cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
    #endif
}
