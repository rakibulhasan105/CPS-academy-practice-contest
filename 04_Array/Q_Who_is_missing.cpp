/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
 
void phobia(int Shuhashini)
{
    int n;
    cin >> n;
    std::vector<int > vec(n*4-1);
    for(auto &x : vec) cin >> x;
    sort(vec.begin(),vec.end());
    int count = 1;
    for(int i = 1; i < n*4-1; i++)
    {
        if(vec[i]==vec[i-1]) count++;
        else{
            if(count < 4) 
                {
                    cout << vec[i-1] << endl;
                    return;
                }
            count = 1;  
            }
    }
    cout << vec.back() << endl;
    return;
}
 
int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

  return 0; //                Hey, it's like a phobia..
}
