#include <bits/stdc++.h>
using namespace std;

int64_t somma_apple(int N, vector<bool> apple_bit, vector<int64_t> &apples)
{

      int64_t somma = 0;

      for (int i = 0; i < N; i++)
      {
            if (apple_bit[i])
            {
                  somma += apples[i];
            }
      }

      return somma;
}

int main()
{

      int N;
      cin >> N;

      vector<int64_t> apples;
      vector<bool> apple_bit(N, 0);

      int64_t somma_tot = 0;
      int64_t somma_provvisoria = 0;
      int64_t diff = INT_MAX;

      for (int i = 0; i < N; i++)
      {
            int64_t apple;
            cin >> apple;

            apples.push_back(apple);
      }

      for (int apple : apples)
      {
            somma_tot += apple;
      }


      while (somma_provvisoria < somma_tot)
      {
            for (int i = N - 1; i >= 0; i--)
            {
                  if (apple_bit[i] == 0)
                  {
                        apple_bit[i] = 1;

                        somma_provvisoria = somma_apple(N, apple_bit, apples);
                        diff = min(diff, abs(somma_tot - somma_provvisoria - somma_provvisoria));

                        break;
                  }
                  else
                  {
                        apple_bit[i] = 0;
                  }
            }
      }

      cout << diff << endl;

      return 0;
}