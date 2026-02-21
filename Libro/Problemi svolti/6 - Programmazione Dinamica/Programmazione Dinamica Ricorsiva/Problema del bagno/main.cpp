#include <bits/stdc++.h> 
using namespace std;      

/*
 Funzione ricorsiva f(N)
 Calcola il numero di modi di risolvere il problema del bagno
 secondo la relazione:
 f(1) = 1
 f(2) = 2
 f(N) = f(N-1) + f(N-2) per N > 2
*/
int64_t f(int N){

      // Caso base: se N = 1, ritorna 1
      if(N == 1){
            return 1;
      }
      // Caso base: se N = 2, ritorna 2
      else if(N == 2){
            return 2;
      }
      // Caso ricorsivo: applica la formula f(N) = f(N-1) + f(N-2)
      else{
            return f(N-1) + f(N-2);
      }
}

int main(){

      int N;          // Variabile che rappresenta la dimensione del bagno
      cin >> N;       

      int64_t ans;    // Variabile che conterrà il risultato finale
      ans = f(N);     // Chiamata alla funzione ricorsiva

      cout << ans << endl;   // Stampa il risultato

      return 0;    
}