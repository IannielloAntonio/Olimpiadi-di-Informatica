// https://training.olinfo.it/task/ois_gameshow2

#include <bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;

      vector<int64_t> guadagno(N);
      vector<int64_t> costo(N);
      vector<int64_t> compensazione(N);
      
      for(int i=0; i<N; i++){
            cin >> guadagno[i];
      }

      for(int i=0; i<N; i++){
            cin >> costo[i];
      }

      for(int i=0; i<N; i++){
            cin >> compensazione[i];
      }

      int64_t budget=0;
      int64_t budget_iniziale = 0;
      int64_t vincita = 0;

      for(int i=0; i<N; i++){
            //cerco di capire se mi conviene comprare o meno prima di tutto

            if(compensazione[i] >= guadagno[i]- costo[i] ){ //non compro
                  budget+=compensazione[i];
                  vincita+= compensazione[i];
                  continue;
            }
            else{ //compro
                  if(budget < costo[i]){
                        int64_t temp = budget_iniziale;
                        budget_iniziale += costo[i] - budget;
                        budget += budget_iniziale - temp;
                  }

                  budget -= costo[i];
                  vincita += guadagno[i] - costo[i];


            }



      }

      
      cout << vincita << " " << budget_iniziale << endl;
}