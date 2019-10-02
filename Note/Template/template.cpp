#include <bits/stdc++.h>
using namespace std;

#define  Infile         freopen("input.txt", "r", stdin)
#define  Outfile        freopen("output.txt", "w", stdout)
#define  lowb(a,x)      lower_bound(a.begin(),a.end(),x)-a.begin()
#define  upb(a,x)       upper_bound(a.begin(),a.end(),x)-a.begin()
#define  show(a)        cout<<"\n-> "<<#a<<" = "<<a<<endl
#define  fu(i,a,b)      for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b)      for(long long i=(a); i>=(b); --i)
#define  fo(i,n)        for(long long i=0; i<(n); ++i)
#define  fixset(x)      fixed<<setprecision(x)
#define  ms(a)          memset(a, 0, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define  mp(a,b)        make_pair(a, b)
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
ll const INF = LLONG_MAX;
db const EPS  = DBL_EPSILON;
ll fpow(ll Aa, ll Ax, ll BASE);

inline ll eulerPhi(ll NUM);
inline ll mod(string NUM, ll BASE);
inline ll diMod(ll Aa, ll Bb, ll BASE);
inline ll mulMod(ll Aa, ll Bb, ll BASE);
inline string toString(ll NUM);
inline void Tstart();
inline void Tstop();


//Declare Here


//============//

void Solve()
{
	//code here
	
	       
}


//=============================================================================//

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifdef RAVENCLAW
        //Infile;
        //Outfile;
    #endif
        Solve();
        
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
    if(Xx == 0) return 1;	
    if(Xx&1)    return Aa*fpow(Aa, Xx-1, BASE)%BASE;
    else
    {
        ll Tt=fpow(Aa, Xx/2, BASE);
        return Tt*Tt%BASE;
    }
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

inline void Tstart()
{
    TimeBegin = clock();
}

inline void Tstop()
{
    TimeEnd = clock();
    cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
}
