<snippet>
  <content><![CDATA[
/*
*    Author: asharusmani
*    Created: $CURRENT_DATETIME
*
*    ❝ If the world was ending, I'd wanna be next to you ❞
*    ❝ If the party was over and our time on Earth was through ❞
*    ❝ I'd hold you close for just a while... and die with a smile ❞
*/



#include "bits/stdc++.h"
using namespace std;
#ifndef ONLINE_JUDGE
    #define DEBUG // Enable debug locally
#endif

#ifdef DEBUG
    #define msg(statement) cerr << statement << endl
    #define debug(var) cerr << (#var) << ": " << var << endl
#else
    #define msg(statement)
    #define debug(var)
#endif

// Template aliases for convenience
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

template <typename T>
using max_heap = priority_queue<T>;

// Ostream overloads for printing (always available, minimal compile-time cost)
template <typename T>
ostream &operator<<(ostream &os, min_heap<T> H) {
    while (!H.empty()) {
        os << H.top() << " ";
        H.pop();
    }
    return os << endl;
}

template <typename T>
ostream &operator<<(ostream &os, max_heap<T> H) {
    while (!H.empty()) {
        os << H.top() << " ";
        H.pop();
    }
    return os << endl;
}

template <typename F, typename S>
ostream &operator<<(ostream &os, pair<F, S> P) {
    return os << P.first << " " << P.second;
}

template <typename T>
ostream &operator<<(ostream &os, vector<T> arr) {
    for (int i = 0; i < (int)arr.size(); i++) {
        os << arr[i] << " ";
    }
    return os << "";
}

template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> matrix) {
    os << endl;
    for (int i = 0; i < (int)matrix.size(); i++) {
        for (int j = 0; j < (int)matrix[i].size(); j++) {
            os << matrix[i][j] << " ";
        }
        os << endl;
    }
    return os << "";
}

template <typename T>
ostream &operator<<(ostream &os, set<T> S) {
    for (auto s : S) {
        os << s << " ";
    }
    return os << "";
}

template <typename T>
ostream &operator<<(ostream &os, multiset<T> S) {
    for (auto s : S) {
        os << s << " ";
    }
    return os << "";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, map<F, S> M) {
    os << endl;
    for (auto m : M) {
        os << m << endl;
    }
    return os << "";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, multimap<F, S> M) {
    os << endl;
    for (auto m : M) {
        os << m << endl;
    }
    return os << "";
}
#define ll long long
#define nl endl
#define double long double
#define pb push_back
#define forn(i,a,n) for(int i=a;i<n;++i)
#define all(a) a.begin(),a.end()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define MOD(a,b) ((a%b)+b)%b
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vd vector<double>
#define vs vector<string>
#define vll vector<ll>
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);int t = 1;


void solve(){
$0
}
int32_t main() {
    fastnuces;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
]]></content>
  <tabTrigger>ash</tabTrigger>
  <description></description>
  <!-- Optional: Set a scope to limit where the snippet will trigger -->
   <scope >source.c++</scope >
</snippet>
