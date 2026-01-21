#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N;
      cin >> N;
      vector<int> v(N);

      for (int i = 0; i < N; i++)
      {
            cin >> v[i];
      }

      vector<int> prefix(N);
      prefix[0] = v[0];

      vector<int> suffix(N);
      suffix[N - 1] = v[N - 1];

   

      for (int i = 1; i < N; i++) // riempio il vettore prefix (somme da sinistra)
      {
            prefix[i] = v[i] + prefix[i - 1];
      }

      for (int i = N - 2; i >= 0; i--) // riempio il vettore suffix (somme da destra)
      {
            suffix[i] = v[i] + suffix[i + 1];
      }

      // Il generico elemento prefix[i] contiene la somma di tutti gli elementi del vettore v fino all'indice i
      // Il generico elemento suffix[i] contiene la somma di tutti gli elementi del vettore v dall'indice i fino all'ultimo elemento

      for (int i = 0; i < N; i++)
      {
            if (prefix[i - 1] == suffix[i + 1])
            {
                  cout << i;
                  return 0;
            }
      }

      cout << -1;

      return 0;
}