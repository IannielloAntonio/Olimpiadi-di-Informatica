// https://training.olinfo.it/task/oii_alberi

#include <bits/stdc++.h>
using namespace std;

long long carica(int N, int K, vector<int> A)
{
      vector<bool> flagged(N, 0);
      int64_t costo = 0;

      for (int i = 0; i < N; i++)
      {
            if (A[i] >= K)
            {
                  flagged[i] = 1;
            }
      }

      for (int i = 0; i < N; i++)
      {
            if (flagged[i])
            {
                  costo += K;
            }
            else
            {
                  costo += A[i];
            }

            if (i == (N - 1) && flagged[i])
            {
                  costo += A[i];
            }
      }

      int64_t somma_non_sfrondati = 0;

      for (int i = 0; i < N; i++)
      {
            somma_non_sfrondati += A[i];
      }

      costo = min(costo, somma_non_sfrondati);

      return costo;
}

// GRADER DI ESEMPIO, NON MODIFICARE

#ifndef EVAL

int main()
{
      int64_t N, K;
      cin >> N >> K;

      vector<int> A(N);
      for (int &a : A)
            cin >> a;

      cout << carica(N, K, A) << endl;

      return 0;
}

#endif
