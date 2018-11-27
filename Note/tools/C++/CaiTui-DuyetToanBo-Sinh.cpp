#include <iostream>
using namespace std;
#define INF 1000000000
#define MAX 100
int XOPT[MAX], FOPT = -INF;
int X[MAX], U[MAX], F[MAX], n, b; 

void Init();
void Update();
void Try(int i);
void Result();

int main()
{
	Init();
	Try(1);
	Result();
		
	return 0;
}

void Init()
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nNhap he so F: ";
	for(int i = 1; i <= n; i++)
	cin >> F[i];
	cout << "\nNhap he so U: ";
	for(int i = 1; i <= n; i++)
	cin >> U[i];
	cout << "\nNhap b: ";
	cin >> b;
}
 
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		X[i] = j;
		if(i == n)
			Update();
		else
			Try(i+1);
	}
}

void Update()
{
	int S = 0;
	int Ux = 0;
	for(int t = 1; t <= n; t++)
		S+= F[t]*X[t];
	for(int t = 1; t <= n; t++)
		Ux+= U[t]*X[t];
	if(FOPT < S && Ux <= b)
	{
		FOPT = S;
		for(int t = 1; t <= n; t++)
		XOPT[t] = X[t];
	}
}

void Result()
{
	cout << "\nPhuong an toi uu: ";
	for(int i = 1; i <= n; i++)
		cout << XOPT[i] << " ";
	cout << "\nGia tri toi uu: ";
	cout << FOPT;
}
