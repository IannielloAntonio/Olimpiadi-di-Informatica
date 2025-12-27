#include <bits/stdc++.h>
using namespace std;

int ribalta(int N, string S)
{
      int64_t totale=0, uno=0, zero = 0;
      int64_t valore_attuale = 0;

      for(int i=0; i<N; i++){
            if(S[i]=='0')
            {
                  valore_attuale++;
                  zero++; // mi serve davvero?
            }
            else{
                  valore_attuale--;
                  uno++;
            }

            totale = max(valore_attuale, totale);
      }

      return totale + uno;
}

// int main()
// {
//       int N;
//       cin >> N;

//       string S;
//       cin >> S;

//       cout << ribalta(N, S) << endl;

//       return 0;
// }