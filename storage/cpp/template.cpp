// テンプレート

#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<ll, ll>> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef pair<int, int> P;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '
'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define fi first
#define se second
// #include <atcoder/all>
// using namespace atcoder;
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T, class U>
inline bool chmax(T& a, U b) {
	if (a < b) {
		a = b;
		return 1;
	}
	return 0;
}
template <class T, class U>
inline bool chmin(T& a, U b) {
	if (a > b) {
		a = b;
		return 1;
	}
	return 0;
}
template <class T>
inline void dump(T& v) {
	if (v.size() > 100) {
		cout << "ARRAY IS TOO LARGE!!!" << endl;
	} else {
		irep(i, v) { cout << (*i) << ((i == --v.end()) ? '
' : ' '); }
	}
}
template <class T, class U>
inline void dump(map<T, U>& v) {
	if (v.size() > 100) {
		cout << "ARRAY IS TOO LARGE!!!" << endl;
	} else {
		irep(i, v) { cout << i->first << " " << i->second << '
'; }
	}
}
template <class T, class U>
inline void dump(pair<T, U>& p) {
	cout << p.first << " " << p.second << '
';
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 61;
constexpr ll MOD = 1000000007;  // 998244353;
constexpr ld EPS = 1e-11;

/* --------------------   ここまでテンプレ   -------------------- */

int main() {
	
}
