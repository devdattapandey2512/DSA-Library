//Made by: Devdatta Pandey
//A template for coding competion
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define ll long long int
#define mod 1000000007
#define inf 1000000000000000001
#define LIMIT 500001

using namespace std;


ll fact[LIMIT];

ll power(ll x, unsigned ll y, ll p)
{
	ll res = 1;

	x = x % p;

	if (x == 0) return 0;
	while (y > 0)
	{

		if (y & 1)
			res = (res * x) % p;

		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

ll modinv(ll n, ll p)
{
	return power(n, p - 2, p);
}

ll mul(ll a, ll b)
{
	ll res = ((a % mod) * (b % mod)) % mod;

	return res;
}


ll nCr(ll n, ll r, ll m)
{
	if (r == 0)
		return 1;

	return (((fact[n] * modinv(fact[n - r], mod)) % m) * modinv(fact[r], mod)) % m;
}

void factorial()
{
	fact[0] = 1;
	fact[1] = 1;
	for (int j = 2; j < LIMIT; j++)
	{
		fact[j] = (1ll * fact[j - 1] * j) % mod;
	}
}

void solve()
{
	// code here
}

int main()
{
	std::ios::sync_with_stdio(false);
	factorial();
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
