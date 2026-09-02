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
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        cout << v[i] << endl;
    }
    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}
