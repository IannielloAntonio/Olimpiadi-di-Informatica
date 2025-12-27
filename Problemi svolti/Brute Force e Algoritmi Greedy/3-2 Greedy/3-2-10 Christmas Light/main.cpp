#include <bits/stdc++.h>
using namespace std;

int main()
{
      int64_t N, C;
      cin >> N;
      cin >> C;

      vector<int> count(C, 0);
      vector<int64_t> L(N);

      for (int i = 0; i < N; i++)
      {
            cin >> L[i];
      }

      // Metodo della sliding window credo

      int left = 0, right = 0; //finestra iniziale
      int total_color = 0;
      int dist = INT_MAX;

      for (right = 0; right < N; right++) //il for praticamente sposta automaticamente la finestra a destra
      {
            count[L[right]]++;

            if (count[L[right]] == 1)
            {
                  total_color++;
            }

            while (total_color == C)
            {
                  dist = min(dist, right - left + 1);

                  
                  count[L[left]]--;
                  
                  if(count[L[left]] == 0){
                        total_color--;
                  }

                  left++;
                  
            }

      }

      cout << dist << endl;

      return 0;
}