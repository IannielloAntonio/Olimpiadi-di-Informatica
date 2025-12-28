#include <bits/stdc++.h>
using namespace std;

int main()
{

      int N;
      N = 15;

      vector<int64_t> marco_coins(N,0);
      vector<int64_t> value(N);
      vector<int64_t> optimal_coins(N, 0);
      int64_t totale = 0;

      value[0] = 1;
      value[1] = 2;
      value[2] = 5;
      value[3] = 10;
      value[4] = 20;
      value[5] = 50;
      value[6] = 100;
      value[7] = 200;
      value[8] = 500;
      value[9] = 1000;
      value[10] = 2000;
      value[11] = 5000;
      value[12] = 10000;
      value[13] = 20000;
      value[14] = 50000;

      for (int i = 0; i < N; i++)
      {
            cin >> marco_coins[i];
            totale = totale + marco_coins[i] * value[i];
      }

      for (int i = N - 1; i >= 0; i--)
      {
            if (totale / value[i] >= 1)
            {
                  optimal_coins[i] += totale / value[i];
                  totale = totale - (optimal_coins[i] * value[i]);
            }
      }

      for (int i = 0; i < N; i++)
      {
            cout << optimal_coins[i] << " ";
      }

      return 0;
}