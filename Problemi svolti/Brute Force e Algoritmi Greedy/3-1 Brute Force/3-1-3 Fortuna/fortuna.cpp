#include <bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> valori, int N){
      int temp = valori[N-1];

      for(int i=N-1; i>0; i--){
            valori[i] = valori[i-1];
      }

      valori[0] = temp;

      return valori;


}

int main()
{
      ifstream inputFile("fortuna_input_4.txt");

      int T;
      inputFile >> T;
      
      for(int test=1; test<=T; test++){
            int ans = INT_MAX;
            int temp_ans = 0;
            
            int N;
            inputFile >> N;
            vector<int> V, G;

            for(int i=0; i<N; i++){
                  int v;
                  inputFile >> v;

                  V.push_back(v);
            }

            for(int i=0; i<N; i++){
                  int g;
                  inputFile >> g;

                  G.push_back(g);
            }

            for(int i=0; i<N; i++){
                  temp_ans = 0;
                  for(int j=0; j<N; j++){
                        temp_ans += G[j]*V[j]; 
                  }
                  
                  V = rotate(V, N);
                  ans = min(temp_ans, ans);
            }

            cout << "Case #" << test << ": " << ans << endl;
      }

      return 0;
}