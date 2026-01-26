#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> sticks;
      int numbers;
      int costo_minimo = INT_MAX;

      cin >> numbers; /* Chiedo all'utente la quantità di numeri che 
                        andranno a riempire il vector */
      
      for (int i = 0; i < numbers; i++)
      {
            int stick;
            cin >> stick;
            sticks.push_back(stick);
            //Riempio il vettore con elementi a scelta dell'utente
      }

      int minimo = *min_element(sticks.begin(), sticks.end());
      int massimo = *max_element(sticks.begin(), sticks.end());

      for (int i = minimo; i <= massimo; i++)
      {
            int costo = 0;
            int somma_costi = 0;
            for (int stick : sticks)
            {
                  costo = abs(stick - i);

                  somma_costi = somma_costi + costo;
            }

            costo_minimo = min(somma_costi, costo_minimo);
      }

      cout << costo_minimo;

      return 0;
}