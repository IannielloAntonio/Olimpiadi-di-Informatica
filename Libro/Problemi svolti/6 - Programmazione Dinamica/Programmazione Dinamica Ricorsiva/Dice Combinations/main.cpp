#include <bits/stdc++.h>
using namespace std;

int n;
vector<int64_t> memo;
const int64_t MOD = 1000000007;

int64_t dp(int n){

      if(n == 0 || n == 1){
            return 1;
      }

      if(n < 0){
            return 0;
      }

      if(memo[n] != -1){
            return memo[n];
      }

      memo[n] = (dp(n-6) + dp(n-5) + dp(n-4) + dp(n-3) + dp(n-2) + dp(n-1)) % MOD;
      return memo[n];

}

int main() {
      cin >> n;

      memo = vector<int64_t>(n+1, -1);

      cout << dp(n);

      return 0;
}