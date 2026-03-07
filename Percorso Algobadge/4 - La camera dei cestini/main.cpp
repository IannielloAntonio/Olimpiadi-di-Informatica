#include <bits/stdc++.h>
using namespace std;

int main() {

      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

      int T;
      cin >> T;

      for(int t=1; t<=T; t++){
            int N, M, Q;
            cin >> N >> M >> Q;

            string S;
            char azione;
            int from, to;




            vector<string> ans(M);

            string risposta;

            cin >> ans[0];

            for(int i=0; i<Q; i++){
                  cin >> azione;
                  cin >> from >> to;

                  if(azione == 's'){
                        char temp = ans[from].back(); // Salvo l'elemento da spostare in temp
                        ans[from].pop_back();         // Elimino l'elemento da spostare dal cestino di partenza
                        ans[to].push_back(temp);      // Metto l'elemento da spostare nel cestino di arrivo
                  }

                  if(azione == 'c'){
                        risposta.push_back(ans[from][to]);
                  }
            }

            cout << "Case #" << t << ": " << risposta << endl;

            
      }

      return 0;
}