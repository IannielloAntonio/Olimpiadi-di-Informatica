#include <bits/stdc++.h>
using namespace std;

int main(){
      int N, T;
      cin >> N;
      cin >> T;

      vector<pair<int,int>> pii(N);

      for(int i=0; i<N; i++){
            cin >> pii[i].first >> pii[i].second;
      }

      // il pair è la scelta giusta?

      // forse avrei potuto creare un vector normale e tenere conto
      // del fatto che se sono in una posizione pari allora quello
      // è un orario di inizio, altrimenti è un orario di fine.

      int ans = -1;

      for(int i=1; i<N; i++){
            int available_time = (24 - pii[i-1].second) + pii[i].first;
            
            if(available_time >= T){
                  ans = i-1;
                  break;
            }
      }

      cout << ans << endl;

}