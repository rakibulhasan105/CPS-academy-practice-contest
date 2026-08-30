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
   vector<int> a(3),b(3);
   cin >> a[0] >> a[1] >> a[2];
   cin >> b[0] >> b[1] >> b[2];
   sort(a.rbegin(),a.rend());
   sort(b.rbegin(),b.rend());
   int alice = 100*a[0] + 10*a[1]+a[2];
   int bob   = 100*b[0] + 10*b[1]+b[2];
   if(alice>bob) cout << "Alice" << endl;
   else if(bob> alice) cout << "Bob" << endl;
   else cout << "Tie" << endl;
   return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; //                Hey, it's like a phobia..
}
