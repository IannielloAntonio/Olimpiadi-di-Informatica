/* Given an array of n integers, your task is to
   find for each array position the nearest
   position to its left having a smaller value. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t N;          // Numero di elementi dell'array
    cin >> N;           // Lettura di N da input

    // array   : contiene i valori dell'array
    // results : contiene la risposta per ogni posizione,
    //           inizializzata a 0 (nessun elemento più piccolo a sinistra)
    
    vector<int> array, results(N, 0);

    // Lettura dei valori dell'array
    for (int i = 0; i < N; i++)
    {
        int64_t x;      // Variabile temporanea per leggere ogni valore
        cin >> x;       // Lettura del valore
        array.push_back(x); // Inserimento in coda al vector
    }

    // Per ogni posizione i dell'array
    for (int i = 0; i < N; i++)
    {
        // Scorriamo tutti gli elementi a sinistra di i
        for (int j = 0; j < i; j++)
        {
            // Se troviamo un valore più piccolo di array[i]
            if (array[j] < array[i])
            {
                // Aggiorniamo la risposta con la posizione (1-based)
                /* IMPORTANTE: Non interrompiamo il ciclo. alla fine rimarrà
                  l'ULTIMA posizione valida trovata (la più vicina a i) */
                results[i] = j + 1;
            }
        }
    }

    // Stampa delle soluzioni
    for (int result : results)
    {
        cout << result << " ";
    }

    return 0; 
}