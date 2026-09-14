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
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for(auto &val : vec) cin >> val;
    for(int i = 0; i < n; i++)
    {
       if( i+1 < vec.size() && vec[i] < vec[i+1])
       {
          continue;
       }
       else
       {
           cout << vec[i] << endl;
           return;
       }
    }
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
