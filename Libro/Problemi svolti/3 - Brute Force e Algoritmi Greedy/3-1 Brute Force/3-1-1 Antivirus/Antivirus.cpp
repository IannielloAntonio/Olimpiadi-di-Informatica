#include <bits/stdc++.h>
using namespace std;

int main()
{
      ifstream inputFile("antivirus_input_8.txt");

      int T;
      inputFile >> T;

      // Apro il file di input

      for (int test = 1; test <= T; ++test)
      {
            int N1, N2, N3, N4;
            inputFile >> N1 >> N2 >> N3 >> N4;
            /* l'operatore >> legge solo un token, ovvero un blocco di caratteri
            fino al primo spazio all'interno del file. */

            int M;
            inputFile >> M;
          
            string F1, F2, F3, F4;
            inputFile >> F1 >> F2 >> F3 >> F4;

            int F1_virus;
            int F2_virus;
            int F3_virus;
            int F4_virus;

            /*
                  Controllo se i primi M caratteri della prima stringa si
                  ripetono, se non
            */

            for(int i = 0; i < (int)F1.length(); i++){

                  F1_virus = i;
                  F2_virus = -1;
                  F3_virus = -1;
                  F4_virus = -1;
                  
                  string virus_candidato = F1.substr(i, M);

                  for(int j=0; j<(int)F2.length(); j++){
                        if(F2.substr(j, M) == virus_candidato){
                              F2_virus = j;
                              break;
                        }
                  }

                  for(int j=0; j<(int)F3.length(); j++){
                        if(F3.substr(j, M) == virus_candidato){
                              F3_virus = j;
                              break;
                        }
                  }

                  for(int j=0; j<(int)F4.length(); j++){
                        if(F4.substr(j, M) == virus_candidato){
                              F4_virus = j;
                              break;
                        }
                  }

                  if(
                        F2_virus != -1 &&
                        F3_virus != -1 &&
                        F4_virus != -1)
                  {
                        break;
                  }




            }

            cout << "Case #" << test << ": ";
            cout << F1_virus << " " << F2_virus << " " << F3_virus << " " << F4_virus << endl;
      }

      inputFile.close();

      return 0;
}