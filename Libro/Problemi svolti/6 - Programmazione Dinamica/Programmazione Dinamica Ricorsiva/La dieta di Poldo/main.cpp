#include <bits/stdc++.h>
using namespace std;


vector<int16_t> P;
int N;

vector<vector<int16_t>> memo;

int16_t dp(int16_t m, int16_t upm){
      if(m == N){
            return 0;
      }

      if(memo[m][upm] != -1){
            return memo[m][upm];
      }

      int16_t preso=0, non_preso=0;

      if(P[m] < upm){
            preso = dp(m+1, P[m]) + 1;
      }
      non_preso = dp(m+1, upm);

      memo[m][upm] = max(preso, non_preso);

      return memo[m][upm];
}

int main() {
      freopen ("input.txt", "r", stdin);
      freopen ("output.txt", "w", stdout);
      cin >> N;

      P = vector<int16_t>(N);

      for(int i=0; i<N; i++){
            cin >> P[i];
      }

      memo = vector<vector<int16_t>> (N, vector<int16_t> (10001, -1));

      cout << dp(0, 10000);

      return 0;
}