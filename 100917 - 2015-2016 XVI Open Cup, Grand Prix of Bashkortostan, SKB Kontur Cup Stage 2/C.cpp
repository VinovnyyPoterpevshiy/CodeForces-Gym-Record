// 100917 - 2015-2016 XVI Open Cup, Grand Prix of Bashkortostan, SKB Kontur Cup Stage 2
// 100917C

// 2015-2016 XVI Open Cup, Grand Prix of Bashkortostan, SKB Kontur Cup Stage 2
// 100917C

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<bool> vb;
typedef vector<string> vs;
const int di[] = {0, 0, 1, -1};
const int dj[] = {1, -1, 0, 0};
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const long double EPS = 1e-6;
#define all(x) x.begin(),x.end()
#define x first
#define y second

#include <ext/hash_set>
#include <ext/numeric>



int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	long long n;
	cin >> n;
	long long res = 0;
	for (int q = 1; q < n; q++) {
		long long d = 1 + q;
		long long p = q;
		while (d <= n) {
			if (n % d == 0)
				res++;
			p *= q;
			d += p;
		}
	}
	cout << res << endl;
}