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
    int n,  p , q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<ll> vec(n);
    for(auto & v : vec) cin >> v;
    // int pp = p;
    // int rr = r;
    // vector<ll> b(n);
    // for(int i = r; i <=s; i++)
    // {
    //     b[pp-1] = vec[i-1];
    //     pp++;
    // }
    //  for(int i = p; i <=q; i++)
    // {
    //     b[rr-1] = vec[i-1];
    //     rr++;
    // }
    // for(int i = 0;i < p ;i++)
    // b[i]=vec[i];
    //  for(int i = q;i < r ;i++)
    // b[i]=vec[i];
    //  for(int i = s;i < n ;i++)
    // b[i]=vec[i];
    // for(auto &v : b) cout << v << " ";
    for(int i = 0;i < p-1 ;i++)
    cout << vec[i] << " ";
    for(int i = r-1;i < s ;i++)
    cout << vec[i] << " ";
    for(int i = q; i < r-1;i++)
    cout << vec[i] << " ";
    for(int i = p-1; i < q;i++)
    cout << vec[i] << " ";
    for(int i = s; i < n;i++)
    cout << vec[i] << " ";


    cout << endl;

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
