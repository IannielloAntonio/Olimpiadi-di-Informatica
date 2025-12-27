// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>
using namespace std;

int main()
{
      // uncomment the following lines if you want to read/write from files
      // ifstream cin("input.txt");
      // ofstream cout("output.txt");

      int64_t N, X;
      cin >> N >> X;
      
      int64_t indice = -1;
      int64_t minuti = 0;

      vector<int64_t> L(N);
      for (int64_t i = 0; i < N; i++)
      {
            cin >> L[i];
      }

      sort(L.begin(), L.end());

      for (int64_t i = 0; i < N-1; i = i + 2)
      {
            if (L[i] + L[i + 1] <= X)
            {
                  indice=i+2;
            }
      }
      
      int64_t i=0;
      while(i<N){
            if(i<indice){
                  minuti++;
                  i+=2;
            }
            else{
                  minuti++;
                  i++;
            }
      }

      cout << minuti << endl; // print the result
      return 0;
}
