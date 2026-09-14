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
   vector<int> vec(8);
  // vector<int> vec1 = {100,125,150,175,200,225,250,275,300,325,350,375,400,425,450,475,500,525,550,575,600,625,650,675};
   for(auto &val : vec) cin >> val;
   for(int i = 1; i < 8; i++)
   {
       if(vec[i] < vec[i-1])
       {
           cout << "No" << endl;
           return;
       }
       else if(vec[i] < 100 || vec[i] > 675 || vec[i-1] < 100 || vec[i-1] > 675)
       {
           cout << "No" << endl;
           return;
       } else if(vec[i] %25 != 0 || vec[i-1] %25 != 0)
       {
           cout << "No" << endl;
           return;
       }
   }
   cout << "Yes" << endl;

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
