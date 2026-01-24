// https://training.olinfo.it/task/pre-egoi-gelato

#include <bits/stdc++.h>
using namespace std;

int presta(int N, int C, vector<int> P){
      sort(P.rbegin(), P.rend());
      int64_t sum = 0;
      int64_t ans = 0;

      for(int right=0; right<N; right++){
            sum+=P[right];
            ans++;

            if(sum>=C){
                  return ans;
            }

      }

      return ans;
}

// int main()
// {
//       ios::sync_with_stdio(false);
//       cin.tie(0);

//       int N, C;
//       assert(cin >> N);
//       assert(cin >> C);

//       vector<int> P(N);
//       for (int &p : P)
//       {
//             assert(cin >> p);
//       }
//       cout << presta(N, C, move(P)) << "\n";
// }
