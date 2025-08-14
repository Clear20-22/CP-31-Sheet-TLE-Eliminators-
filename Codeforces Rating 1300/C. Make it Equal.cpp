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
    int n, k;
    cin>>n>>k;

    map<int,int> a,b;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x%k]++;
        a[k - x%k]++;
    }

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b[x%k]++;
        b[k - x%k]++;
    }

    if(a!=b){
        cout<<"NO"<<endl;
        return;
    } else {
        cout<<"YES"<<endl;
        return;
    }

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}