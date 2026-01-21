// https://training.olinfo.it/task/ois_ropes

#include <bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;

      vector<int> P(N);
      for(int i=0; i<N; i++){
            cin >> P[i];
      }
      vector<int> T(N);
      for(int i=0; i<N; i++){
            cin >> T[i];
      }

      vector<pair<int, int>> coppie;

      for(int i=0; i<N; i++){
            coppie[i] = {P[i], T[i]};
      }

      sort(coppie.begin(), coppie.end(), [](auto a, auto b){
            return a.first < b.first;
      });

      vector<int> copy_p = P; // controllo se è già una fune

      sort(copy_p.begin(), copy_p.end());
      bool rope=true;

      for(int i=0; i<N; i++){
            if(P[i] != i){
                  rope=false;
                  break;
            }

      }

      // se non è una fune conto quanti zeri, uni, ... ci sono
      // così so quali devo spostare

      vector<int> count(N,0);

      if(!rope){
            for(int i=0; i<N; i++){
                  count[P[i]]++;
            }

            for(int i=0; i<N; i++){
                  
            }
      }
      

      
}