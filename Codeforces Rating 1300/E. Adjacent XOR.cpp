#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <deque>
#include <list>
#include <cassert>
#include <random>
#include <functional>
#include <tuple>
using namespace std;

#define Bismillah ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Multiple_Test int t; cin >> t; while (t--) solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define int long long
#define MOD 1000000007
#define INF numeric_limits<int>::max()

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n),b(n),c;

    for(auto &i: a) cin>> i;
    for(auto &i: b) cin>> i;
    c = a;

    if(a.back() != b.back()){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=n-2;i>=0;i--){
        if(a[i] != b[i]){
            if((a[i]^a[i+1]) != b[i] and (a[i]^c[i+1]) != b[i]){
                cout<<"NO"<<endl;
                return;
            } else {
                a[i] = b[i];
            }
        } 
    }

    cout<<"YES"<<endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}