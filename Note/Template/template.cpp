#include <bits/stdc++.h>
using namespace std;

#define  Infile        	freopen("input.txt", "r", stdin)
#define  Outfile		freopen("output.txt", "w", stdout)
#define  fu(i,a,b) 		for(int i=(a); i<=(b); ++i)
#define  fd(i,a,b) 		for(int i=(a); i>=(b); --i)
#define  fo(i,n) 		for(int i=0; i<(n); ++i)
#define  fix_set(x)     fixed<<setprecision(x)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)


typedef double db;
typedef long long ll;
clock_t TimeBegin, TimeEnd;
ll const MAX = 1e18;
ll const Base = 1;

inline ll fpow(ll a,ll x) {if(x==0)return 1;	if(x&1) {return a*fpow(a,x-1)%Base;} else{ll t=fpow(a,x/2);return t*t%Base;}}  //tinh (a^x) % Base
inline ll diMod(ll A, ll B){ll result = (A * fpow(B, Base-2)) % Base; return result;}		//tinh (A/B) % Base
inline void Tstart();
inline void Tstop();



//declare


//============//

void Input()
{
	
}

void Solve()
{

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	//Infile;
	//Outfile;
	Input();	Tstart();
	Solve();
				Tstop();	
	return 0;
}

void Tstart()
{
	TimeBegin = clock();
}

void Tstop()
{
	TimeEnd = clock();
	cout << "\nTime elapsed: " << 1000 * (TimeEnd - TimeBegin) / CLOCKS_PER_SEC << " ms\n";
}
