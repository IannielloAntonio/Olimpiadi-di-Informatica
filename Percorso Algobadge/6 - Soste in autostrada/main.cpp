#include <bits/stdc++.h>
using namespace std;

void inizia();
void apri(long long p);
void chiudi(long long p);
long long chiedi(long long p);

set<int64_t> strada;

// int main() {
//     int Q;
//     cin >> Q;

//     inizia();

//     for (int i = 0; i < Q; i++){
//         long long p;
//         char t;
//         cin >> t >> p;
//         if (t == 'a') apri(p);
//         else if (t == 'c') chiudi(p);
//         else cout << chiedi(p) << endl;
//     }

//     return 0;
// }

void inizia()
{
}

void apri(long long p)
{
      strada.insert(p);
}

void chiudi(long long p)
{
      strada.erase(p);
}

long long chiedi(long long p)
{
      long long ans;
      long long a; // posizione autogrill più vicino indietro
      long long b; // posizione autogrill più vicino in avanti
      long long dist_b = -1;
      long long dist_a = -1;
      auto it = strada.lower_bound(p);

      if (it == strada.end())
      {
            b = 0; // se b=0 vuol dire che avanti non c'è nulla di aperto
      }
      else
      {
            b = *it;
            dist_b = abs(p - b);
      }

      if (it == strada.begin())
      {
            a = 0; // se a = 0 vuol dire che dietro non c'è nulla di aperto
      }
      else
      {
            it--;
            a = *it;
            dist_a = abs(p - a);
      }

      if (a == 0 && b == 0)
      {
            return -1;
      }

      if (a == 0)
      {
            return b;
      }

      if (b == 0)
      {
            return a;
      }

      if (a == b)
      {
            return b;
      }

      if (abs(b - p) > abs(p - a))
      {
            return a;
      }
      else
      {
            return b;
      }
}
