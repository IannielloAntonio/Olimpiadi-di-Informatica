#include <bits/stdc++.h>
using namespace std;

// Funzione che calcola quanti prodotti possono essere fatti in un certo tempo
// "tempo" = tempo totale disponibile
// "N" = numero di macchine
// "k" = vettore dei tempi per produrre un prodotto per ciascuna macchina
// "prodotti" = numero di prodotti richiesti
int64_t simula(int64_t tempo, int N, vector<int> &k, int64_t prodotti){
    int64_t acc = 0; // contatore dei prodotti fatti
    for(int i = 0; i < N; i++){
        acc += tempo / k[i]; // la macchina i produce tempo/k[i] prodotti
        // se abbiamo già raggiunto o superato i prodotti richiesti, smettiamo
        if(acc >= prodotti){
            return acc;
        }
    }
    return acc; // ritorna quanti prodotti sono stati fatti in "tempo"
}

int main(){
    int n;           // numero di macchine
    int64_t t;       // numero di prodotti richiesti
    cin >> n >> t;   

    vector<int> k(n);   // tempi per ciascuna macchina
    for(int i = 0; i < n; i++){
        cin >> k[i];   
    }

    // Binary search: vogliamo trovare il tempo minimo in cui possiamo fare almeno t prodotti
    int64_t ans = -1;      // qui salveremo la risposta
    int64_t low = 0;        // tempo minimo possibile
    int64_t high = 1e18;    // tempo massimo possibile (un limite molto grande, sicuro)

    while(low <= high){
        // calcolo sicuro della metà senza rischio overflow
        int64_t mid = low + (high - low) / 2;

        // calcolo quanti prodotti possiamo fare in "mid" tempo
        int64_t prodotti_finiti = simula(mid, n, k, t);

        if(prodotti_finiti < t){
            // se non bastano, dobbiamo aumentare il tempo
            low = mid + 1;
        }
        else{
            // se bastano, questo è un candidato valido
            ans = mid;
            // proviamo a trovare un tempo ancora più piccolo
            high = mid - 1;
        }
    }

    cout << ans << endl; 
}
