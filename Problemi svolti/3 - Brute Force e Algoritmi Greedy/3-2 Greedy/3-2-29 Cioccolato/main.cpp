// https://territoriali.olinfo.it/task/cioccolato

#include <bits/stdc++.h>
using namespace std;

int main() {
      freopen("input.txt", "r" , stdin);
      freopen("output.txt", "w", stdout);

      int T;
      cin >> T;

      for(int t=1; t<=T; t++){

            int64_t N, M, K;
            cin >> N >> M >> K;

            int64_t ans;
            
            if(N >= M){
                  if(K <= (N-M)){
                        N -= K;
                        ans = N*M;
                  }
                  else{
                        K = K - (N-M);
                        N = N - (N-M);
                        N = N - K/2;
                        M = M - K/2;

                        if(K%2==1){
                              N--;
                        }
                        ans = N*M;
                  }
            }
            else if(M > N){
                  if(K <= (M-N)){
                        M -= K;
                        ans = N*M;
                  }
                  else{
                        K = K - (M-N);
                        M = M - (M-N);

                        M = M - K/2;
                        N = N - K/2;
                        if(K%2==1){
                              N--;
                        }
                     
                        ans = N*M;                  
                  }
            }
            
            cout << "Case #" << t << ": " << ans << endl;
      }

      return 0;
}