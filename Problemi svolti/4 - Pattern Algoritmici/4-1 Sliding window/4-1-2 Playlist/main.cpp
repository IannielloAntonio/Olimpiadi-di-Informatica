// https://cses.fi/problemset/task/1141

#include <bits/stdc++.h>
using namespace std;

int main(){
	int64_t n;
	cin >> n;   // Numero totale di canzoni
	
	vector<int> K(n);   // Vettore che contiene gli ID delle canzoni
	
	// Lettura degli ID delle canzoni
	for(int i=0; i<n; i++){
		cin >> K[i];
	}
	
	// Il problema richiede di trovare la sottosequenza consecutiva piu' lunga
	// in cui ogni canzone compare una sola volta.
	// Si utilizza la tecnica della sliding window (finestra scorrevole).
	
	map<int, int> m;    // Mappa che tiene traccia del numero di occorrenze
	// di ogni canzone nella finestra corrente. Essa e' composta dalla coppia <ID_canzone, occorrenze> (ovvero <chiave, valore>).
	
	int left = 0;       // Indice di inizio della finestra
	int massimo = 0;    // Lunghezza massima trovata
	
	// L'indice right scorre il vettore da sinistra verso destra
	for(int right = 0; right < n; right++){
		
		// Inserisce la canzone K[right] nella finestra
		m[K[right]]++;
		
		// Se la canzone K[right] è già presente (occorrenze > 1),
		// la finestra non è più valida (ci sono duplicati)
		while(m[K[right]] > 1){
			
			// Riduce la finestra da sinistra
			m[K[left]]--;
			left++;
		}
		
		// A questo punto la finestra [left, right] contiene solo canzoni distinte
		// Aggiorna la lunghezza massima trovata
		massimo = max(massimo, right - left + 1);
	}
	
	// Stampa la lunghezza massima della sottosequenza senza ripetizioni
	cout << massimo << endl;
}
