/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{
    vector<ll> x(4), y(4);
    for(int i = 0; i < 4; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    cout << abs(x[2] - x[0]) * abs(x[2] - x[0]) << endl;
    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}
