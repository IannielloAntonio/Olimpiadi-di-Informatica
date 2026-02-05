#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N;
      cin >> N;

      vector<int64_t> a(N);
      for(int i=0; i<N; i++){
            cin >> a[i];
      }

      vector<bool> bitmask(N, 0); 
      int64_t somma;
      bool finished = false;

      while(!finished){
            somma = 0;
            for(int i=0; i<N; i++){
                  if(bitmask[i]==1){
                        somma += a[i]; 
                  }
            }

            cout << somma << endl;

            for(int i=N-1; i>=0; i--){
                  if(bitmask[i] == 0){
                        bitmask[i] = 1;
                        break;
                  }
                  else{
                        bitmask[i] = 0;
                  }
            }


            finished = true;
            for (int i=0; i<N; i++){
                  if(bitmask[i] != 0){
                        finished = false;
                        break;
                  } 
            }


      }

      return 0;
}