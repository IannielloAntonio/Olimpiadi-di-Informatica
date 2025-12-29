// https://training.olinfo.it/task/ois_avg

#include <bits/stdc++.h> 
using namespace std;

int main()
{
    // N = numero di prodotti
    // K = valore della media desiderata
    int64_t N, K;
    cin >> N >> K;

    // Somma iniziale di tutti gli elementi
    int64_t somma_iniziale = 0;

    // Vettore dei valori
    vector<int> P(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> P[i];
        somma_iniziale += P[i];      // Aggiorna la somma totale
    }

    // Ordiniamo i valori in ordine crescente
    // Ci servirà per agire prima sugli elementi più grandi
    sort(P.begin(), P.end());

    // Risposta finale: numero minimo di elementi da modificare
    int64_t ans = 0;

    // "correzione" rappresenta di quanto la somma attuale
    // supera la somma ideale K * N
    // Se è positiva, dobbiamo ridurre la somma
    int64_t correzione = somma_iniziale - K * N;

    // Caso 1: la somma è già minore di K*N
    // Basta modificare solo un elemento
    if (correzione < 0)
    {
        ans = 1;
    }
    // Caso 2: la media è già esattamente K
    // Non serve alcuna modifica
    else if (correzione == 0)
    {
        ans = 0;
    }
    // Caso 3: la somma è troppo grande e va ridotta
    else
    {
        // Partiamo dall’elemento più grande
        for (int i = N - 1; i >= 0; i--)
        {
            // P[i], se minore di correzione, può essere diminuito fino ad 1.
            if (P[i] <= correzione && P[i] > 1)
            {
                // Dopo aver abbassato P[i], calcolo la correzione residua
                correzione -= P[i] - 1;

                // Aumento il numero di elementi modificati
                ans++;
            }
            // Se P[i] è maggiore della correzione residua
            // basta modificare solo questo elemento
            else if (P[i] > correzione)
            {
                ans++; //Basta diminuire solo P[i] dell'intera correzione
                break;   // La correzione è risolta
            }
            // Se l'elemento è già 1, non possiamo ridurlo e passiamo al prossimo
            else if (P[i] == 1)
            {
                continue;
            }
        }
    }

    // Stampa il numero minimo di modifiche necessarie
    cout << ans << endl;

    return 0;
}
