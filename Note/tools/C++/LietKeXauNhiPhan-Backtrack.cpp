#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 100

int n, X[MAX], dem = 0;

void Init()
{
	cout << "\nNhap n = ";
	cin >> n;
}

void Result()
{
	cout << "\nKet qua buoc" << ++dem << ":\t";
	for(int i = 1; i <= n; i++)
		cout << X[i] << " ";
}

void Try(int i)
{
//	int x = 0;
//	if (X[i-1] == 0 && i > 1)
//		x = 1;					// dieu kiem them vao
	for(int j = x; j <= 1; j++)
	{
		X[i] = j;
		if (i == n)
			Result();
		else
			Try(i + 1);
	}
}

int main()
{
	Init();
	Try(1);
	return 0;
}
