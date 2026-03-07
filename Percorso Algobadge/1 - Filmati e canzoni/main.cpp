#include <bits/stdc++.h>
using namespace std;

int main() {

      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

      int T;
      cin >> T;

      for(int t=1; t<=T; t++){
            int N, F, C;
            cin >> N >> F >> C;

            /* N numero di byte dell'hard disk */
            /* F peso per ogni film */
            /* C peso per ogni canzone */

            int nf=0, nc=0;

            while(N >= F){
                  nf++;
                  N = N-F;
            }

            while(N >= C){
                  nc++;
                  N = N-C;
            }
            

            cout << "Case #" << t << ": " << nf << " " << nc << endl;
      }

      return 0;
}