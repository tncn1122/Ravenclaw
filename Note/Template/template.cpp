#include <bits/stdc++.h>
using namespace std;

#define  Infile			freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  lowb(a,x) 		lower_bound(a.begin(),a.end(),x)-a.begin();
#define  upb(a,x) 		upper_bound(a.begin(),a.end(),x)-a.begin();
#define  fu(i,a,b)		for(long long i=(a); i<=(b); ++i)
#define  fd(i,a,b)		for(long long i=(a); i>=(b); --i)
#define  fo(i,n)		for(long long i=0; i<(n); ++i)
#define  show(a) 		cout<<"\n-> "<<#a<<" = "<<(a)<<endl;
#define  fix_set(x)		fixed<<setprecision(x)
#define  ms(a)			memset(a, 0, sizeof(a))
#define  all(x)			(x).begin(), (x).end()
#define  ar(x, n)		(x),(x)+(n)
#define  pb(x)			push_back(x)
#define  mp(a,b)		make_pair(a, b)
#define	 fi				first
#define	 se				second
#define  endl			'\n'

typedef double db;
typedef long long ll;
typedef vector <ll> vtll;
typedef pair <ll, ll> pll;

clock_t TimeBegin, TimeEnd;
ll LX[] = {-1,0,0,1,-1,-1,1,1}; // 4 - 8
ll LY[] = {0,-1,1,0,-1,1,-1,1}; 
ll const INF = LLONG_MAX;
db const EPS  = DBL_EPSILON;

inline ll mod(string num, ll Base);
inline ll diMod(ll A, ll B, ll Base);
inline ll fpow(ll a, ll x, ll Base);
inline string toString(ll n);
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

inline ll mod(string num, ll Base) 
{ 
    ll res = 0; 
    fo(i, num.length()) 
        res = (res*10 + (ll)num[i] - '0') % Base;
    return res; 
} 

inline ll fpow(ll a, ll x, ll Base)
{
	if(x==0)return 1;	
	if(x&1) 
	{
		return a*fpow(a, x-1, Base)%Base;
	} 
	else
	{
		ll t=fpow(a, x/2, Base);
		return t*t%Base;
	}
}

inline ll diMod(ll A, ll B, ll Base)
{
	//(A/B)%Base
	ll result = (A * fpow(B, Base-2, Base)) % Base; 
	return result;
}

inline string toString(ll n) 
{
	stringstream ss; ss << n;
	return ss.str();
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
