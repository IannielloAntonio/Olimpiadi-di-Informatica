// https://training.olinfo.it/task/ois_lights

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int64_t N, C;
      cin >> N;
      cin >> C;

      vector<int> count(C, 0); // count è il vettore che contiene quante luci accese ci sono per ogni colore.
                              // Nella posizione 1, ad esempio, se c'è il numero 2, vuol dire che ci sono
                              // 2 luci accesi del colore 1.
      vector<int64_t> L(N);

      for (int i = 0; i < N; i++)
      {
            cin >> L[i];
      }

      // Metodo della sliding window credo

      int left = 0, right = 0; //finestra iniziale
      int total_color = 0;
      int dist = INT_MAX;

      for (right = 0; right < N; right++) //il for praticamente sposta automaticamente la finestra a destra
      {
            count[L[right]]++;

            if (count[L[right]] == 1)
            {
                  total_color++;
            }

            while (total_color == C) // nella sliding window variabile il while è un classico
                                    // quando è rispettata la condizione (o non rispettata, 
                                    // a seconda del problema), si riduce la finestra con "left++"
            {
                  dist = min(dist, right - left + 1);

                  
                  count[L[left]]--; // stiamo per restringere la finestra, quindi andiamo a togliere il colore corrispondente
                                    // all'elemento uscente.
                  
                  if(count[L[left]] == 0){ // se il contatore relativo a quel colore arriva a 0, allora il numero totale
                                          // di colori diminuisce.
                        total_color--;
                  }

                  left++; // contrazione della finestra.
                  
            }

      }

      cout << dist << endl;

      return 0;
}