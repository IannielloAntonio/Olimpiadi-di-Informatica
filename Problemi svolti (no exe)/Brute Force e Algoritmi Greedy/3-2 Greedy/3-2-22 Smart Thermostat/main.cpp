// https://training.olinfo.it/task/ois_sensor

#include <bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;

      vector<int> V(N);
      
      for(int i=0; i<N; i++){
            cin >> V[i];
      }

      int64_t somma = 0;

      for(int i=0; i<N; i++){
            if(V[i] == -1){
                  V[i] = V[i-1];
            }

            somma += V[i];
      }

      cout << somma << endl;

}