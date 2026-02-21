#include <bits/stdc++.h>
using namespace std;

// matrice globale per memoizzazione
vector<vector<int>> memo;

// funzione dp che calcola il massimo numero di monete a partire dalla cella (r, c)
int64_t dp(int N, int M, int r, int c, vector<vector<int>> &k) {
    // se siamo fuori dalla griglia
    if(r >= N || c >= M) 
        return 0;

    // se siamo nella cella finale, restituisco le monete presenti
    if(r == N-1 && c == M-1)
        return k[r][c];

    // se il valore è già stato calcolato, lo restituisco
    if(memo[r][c] != -1)
        return memo[r][c];

    // calcolo ricorsivo: massimo tra muoversi giù o a destra + monete della cella corrente
    memo[r][c] = k[r][c] + max(dp(N, M, r+1, c, k), dp(N, M, r, c+1, k));
    return memo[r][c];
}

int main() {
    int N, M;
    cin >> N >> M; // dimensioni della griglia

    // leggo la griglia delle monete
    vector<vector<int>> k(N, vector<int>(M));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> k[i][j];
        }
    }

    // inizializzo la matrice memo con -1
    memo = vector<vector<int>>(N, vector<int>(M, -1));

    // calcolo il massimo numero di monete partendo dalla cella (0,0)
    int64_t ans = dp(N, M, 0, 0, k);

    cout << ans << endl;

    return 0;
}
