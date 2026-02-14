#include <bits/stdc++.h>
using namespace std;

int main(){
      // Numero di giorni nel mese (ipotizziamo 30)
      int N = 30; 
      
      // Creiamo un vettore che contiene tutti i giorni del mese
      vector<int> giorni(N);
      
      // Riempimento del vettore: giorni[0] = 1, giorni[1] = 2, ..., giorni[29] = 30
      for(int i=0; i<N; i++){
            giorni[i] = i+1;
      }

      // Inizializziamo gli indici per la ricerca binaria
      int low = 0;        // primo indice del vettore
      int high = N-1;     // ultimo indice del vettore
      int mid = 0;        // indice centrale (verrà calcolato nel ciclo)
      
      int compleanno = 4; // il giorno del compleanno che vogliamo trovare
      int ans = -1;       // qui salveremo l'indice del giorno trovato (-1 significa "non trovato")
      
      // Ciclo principale della ricerca binaria
      // continua finché l'intervallo non è vuoto
      while(low <= high){
            // Calcoliamo l'indice centrale tra low e high
            mid = (high + low)/2;

            // Se il giorno centrale corrisponde al compleanno
            if(giorni[mid] == compleanno){
                  ans = mid; // salviamo l'indice
                  break;     // interrompiamo il ciclo, abbiamo trovato il giorno
            }

            // Se il giorno centrale è maggiore del compleanno
            // significa che il compleanno si trova nella metà sinistra
            if(giorni[mid] > compleanno){
                  high = mid - 1; // aggiorniamo high per escludere la metà destra
            }
            else{
                  // Altrimenti il giorno centrale è minore del compleanno
                  // il compleanno si trova nella metà destra
                  low = mid + 1;  // aggiorniamo low per escludere la metà sinistra
            }
      }

      // Stampa del risultato
      // giorni[ans] contiene il giorno trovato
      cout << "Sei nato il giorno: " << giorni[ans];

      // Nota: se il giorno non fosse presente nel vettore, ans resterebbe -1
      // e sarebbe meglio gestire il caso con un controllo
      // if(ans != -1) cout << giorni[ans]; else cout << "Giorno non trovato";
}
