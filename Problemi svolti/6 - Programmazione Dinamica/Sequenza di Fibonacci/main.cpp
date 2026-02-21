#include <bits/stdc++.h>
using namespace std;

vector<int64_t> memo;

int64_t fib(int N){
      if(memo[N] != -1){
            return memo[N];
      }

      if(N == 0){
            return 0;
      }

      if(N == 1){
            return 1;
      }

      memo[N] = fib(N-1) + fib(N-2);
      return memo[N];
}

int main() {
      int N;
      cin >> N;

      int64_t ans;
      memo = vector<int64_t>(N+1, -1);

      ans = fib(N);

      cout << ans << endl;

      return 0;
}