// https://training.olinfo.it/task/discesa

#include <bits/stdc++.h>
using namespace std;

int A;
vector<vector<int>> piramide;
vector<vector<int>> memo;

int dp(int livello, int colonna){

      
      if(livello == A){
            return 0;
      }

      if(memo[livello][colonna] != -1){
            return memo[livello][colonna];
      }

      memo[livello][colonna] = piramide[livello][colonna] + max(dp(livello+1, colonna), dp(livello+1, colonna+1));

      return memo[livello][colonna];


}

int main() {
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      
      cin >> A;

      piramide = vector<vector<int>> (A, vector<int>(A, -1));
      memo = vector<vector<int>> (A, vector<int>(A+1, -1));

      for(int i=0; i<A; i++){
            for(int j=0; j<=i; j++){
                  cin >> piramide[i][j];
            }
      }


      cout << dp(0, 0);

      return 0;
}