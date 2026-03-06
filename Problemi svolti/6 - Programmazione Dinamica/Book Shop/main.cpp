// https://cses.fi/problemset/task/1158

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> s;
vector<int> h;
vector<vector<int>> memo;

int dp(int stato, int budget){
      if(budget <= 0 || stato == n){
            return 0;
      }

      if(memo[stato][budget] != -1){
            return memo[stato][budget];
      }


      int preso=0, non_preso=0;

      if(budget >= h[stato]){
            preso = dp(stato+1, budget-h[stato]) + s[stato];
      }
     
      non_preso = dp(stato+1, budget);

      memo[stato][budget] = max(preso, non_preso);
      return memo[stato][budget];
}

int main() {
      int x;
      cin >> n >> x;

      s = vector<int>(n);
      h = vector<int>(n);

      for(int i=0; i<n; i++){
            cin >> h[i];
      }

      for(int i=0; i<n; i++){
            cin >> s[i];
      }

      memo = vector<vector<int>>(n, vector<int>(x+1, -1));

      cout << dp(0, x);

      return 0;
}