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

            if(N==1 || N == 2){
                  operazioni = 1;
            }
            else if(N == 0){
                  operazioni = 2;
            }
            else{
                 
                  /* 
                  Parto dal numero obiettivo e divido per 2 se il numero è pari
                  sommo 1 se il numero è dispari
                  */
                  while(N > 2){
                        if(N%2 == 0){ //se il numero è pari
                              N = N / 2; //divido per 2
                              operazioni += 1;
                        }
                        else{ //se il numero è dispari
                              N = N + 1; //sommo 1
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
