// https://training.olinfo.it/task/ois_delivery

#include <bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;

      vector<int64_t> T(N);

      for(int i = 0; i < N; i++){
            cin >> T[i];
      }

      int64_t cambio = 0;
      int64_t giorno = 0;
      int64_t giorno_finale = 0;
      int64_t minimo = T[0];

      for(int i=1; i<N; i++){
            if( T[i-1] - T[i] >= 2 && T[i] < (minimo- (i-giorno_finale))){
                  cambio++;
                  giorno_finale = i;
                  minimo = min(minimo, T[giorno_finale]);
            }
      }

      giorno = T[giorno_finale] + (giorno_finale);

      cout << giorno << " " << cambio << endl;
}