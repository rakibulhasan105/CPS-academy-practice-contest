/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{
   int l,r;
   cin >> l >> r;
   int count = 0;
   for(int i = l; i<= r; i++)
   {
        if(i%10==2 || i%10==3 || i%10==9) count++;
   }
   cout << count << endl;

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