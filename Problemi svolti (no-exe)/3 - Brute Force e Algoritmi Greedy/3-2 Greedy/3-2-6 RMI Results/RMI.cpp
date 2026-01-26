// https://training.olinfo.it/task/sortilegio_ribalta

#include <bits/stdc++.h>
using namespace std;

int main()
{
      // uncomment the two following lines if you want to read/write from files
      // ifstream cin("input.txt");
      // ofstream cout("output.txt");

      int64_t A, B, N;
      int64_t X = 1, Y = 1;

      cin >> A >> B >> N;

      vector<int64_t> F(N);
      for (int i = 0; i < N; ++i)
      {
            cin >> F[i];
      }

      vector<int64_t> S(N);
      for (int i = 0; i < N; ++i)
      {
            cin >> S[i];
      }

      vector<int64_t> somma_punteggi(N);

      int64_t somma_punteggio_mio = A + B;

      int64_t index_min = 0;
      int64_t index_max = N - 1;

      // CALCOLO LA X

      sort(F.begin(), F.end());
      sort(S.begin(), S.end());

      for (int i = N - 1; i >= 0; i--)
      {
            if (somma_punteggio_mio < F[i] || somma_punteggio_mio < S[i])
            {
                  index_max--;
                  X++;
            }
            else
            {
                  break;
            }
      }

      while (index_max>=0)
      {
            if (somma_punteggio_mio < F[index_max] + S[index_min])
            {
                  X++;
                  index_max--;
            }
            else{
                  index_max--;
                  index_min++;
            }
      }

      // CALCOLO LA Y

      int64_t indexF = 0;
      int64_t indexS = N - 1;

      for (int i = 0; i < N; i++)
      {
            if (indexF > N || indexS < 0)
            {
                  break;
            }

            if (S[indexS] + F[indexF] > somma_punteggio_mio)
            {
                  Y++;
                  indexS--;
                  indexF++;
            }
            else
            {
                  indexF++;
            }
      }

      // STAMPO I RISULTATI

      cout << X << endl;
      cout << Y << endl;

      return 0;
}