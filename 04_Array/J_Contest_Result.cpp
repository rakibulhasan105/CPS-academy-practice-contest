/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int Shuhashini)
{
    int n, m;
    cin >> n >> m;
    vector<ll> vec(n),vec2(m);
    for(auto &val : vec) cin >> val;
    for(auto &val : vec2) cin >> val;
    ll sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum += vec[vec2[i]-1];
    }
    cout << sum << endl;

}

int32_t main()
{
    fastio;
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; //                Hey, it's like a phobia..
}
