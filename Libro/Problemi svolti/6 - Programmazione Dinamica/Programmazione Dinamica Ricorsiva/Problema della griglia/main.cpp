#include <bits/stdc++.h>
using namespace std;

// Memoization globale: serve a salvare i risultati già calcolati
// per ogni cella (r, c) e non ricalcolarli più volte
vector<vector<int>> memo;

// Funzione dp che calcola il numero di percorsi dalla cella (r, c) alla cella finale (N-1, M-1)
int64_t dp(int N, int M, int r, int c){
      // Caso base 1: se siamo fuori dalla griglia (riga o colonna oltre i limiti)
      // non esiste un percorso valido, quindi ritorniamo 0
      if(r >= N || c >= M){
            return 0;
      }
      
      // Caso base 2: se la cella (r,c) è già stata calcolata, la restituiamo
      // evitando di ricalcolare percorsi già noti (memoization)
      if(memo[r][c] != -1){
            return memo[r][c];
      }

      // Caso base 3: se siamo arrivati alla cella finale (N-1, M-1)
      // c'è un solo percorso valido (quello appena completato)
      if(r == N-1 && c == M-1){
            return 1;
      }

      // Passi ricorsivi:
      // memo[r][c] = somma dei percorsi partendo dalla cella sottostante (r+1, c)
      // e dalla cella a destra (r, c+1)
      memo[r][c] = dp(N, M, r+1, c) + dp(N, M, r, c+1);

      // Restituiamo il risultato calcolato e salvato in memo
      return memo[r][c];
}

int main() {
      int N, M;
      // Lettura dimensioni della griglia
      cin >> N >> M;

      // Inizializzazione della memoization
      // Tutti gli elementi inizialmente a -1, per indicare che non sono ancora calcolati
      memo = vector<vector<int>>(N, vector<int>(M, -1));

      int64_t ans;
      // Calcolo del numero totale di percorsi a partire dalla cella (0,0)
      ans = dp(N, M, 0, 0);

      // Stampa del risultato
      cout << ans << endl;

      return 0;
}
