#include <bits/stdc++.h>
using namespace std;

int main()
{
      ifstream inputFile("calcolatrice_input_1.txt");

      int T;
      inputFile >> T;

      for (int test = 1; test <= T; ++test)
      {     

            int64_t N;
            inputFile >> N;

            int64_t operazioni = 1;
            int64_t mio_numero = 2;

            if(N==1 || N == 2){
                  operazioni = 1;
            }
            else if(N == 0){
                  operazioni = 2;
            }
            else{
                 
                  // Con il primo while moltiplico per 2 fin quando non ho raggiunto
                  // o superato il numero da raggiungere.
                  while(mio_numero <= N){
                        mio_numero *= 2;
                        operazioni += 1;
                  }

                  // Con il secondo while vado a sottrarre 1 o 2
                  // Fin quando i numeri non risultano uguali
                  while(mio_numero > N){
                        if(mio_numero - N >= 2){
                              mio_numero -= 2;
                              operazioni += 1;
                        }
                        else{
                              mio_numero -= 1;
                              operazioni += 1;
                        }
                  }
            }

            cout << "Case #" << test << ": ";
            cout << operazioni << endl;
      }

      inputFile.close();

      return 0;
}
