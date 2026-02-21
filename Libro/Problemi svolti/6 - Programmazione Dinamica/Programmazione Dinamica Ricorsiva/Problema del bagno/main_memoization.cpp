#include <bits/stdc++.h>
using namespace std;

// Vettore globale per la memoizzazione
vector<int64_t> memo; 

// Funzione ricorsiva con memoizzazione
int64_t f(int N){
    // Se il valore è già calcolato, lo restituiamo direttamente
    if(memo[N] != -1){
        return memo[N];
    }
    else{
        // Casi base
        if(N == 1){
            return 1;
        }
        else if(N == 2){
            return 2;
        }
        // Ricorsione con salvataggio del risultato
        else{
            memo[N] = f(N-1) + f(N-2);
            return memo[N];
        }
    }
}

int main() {
    int N;
    cin >> N; // Input della lunghezza del bagno

    // Allochiamo il vettore memo con dimensione N+1 e inizializziamo a -1
    memo = vector<int64_t>(N+1, -1);

    // Calcoliamo e stampiamo il risultato
    int64_t ans = f(N);
    cout << ans << endl;

    return 0;
}
