// https://training.olinfo.it/task/preoii_vm

#include <bits/stdc++.h>
using namespace std;

long long aggiorna(int N, vector<int> A, vector<int> B)
{
      long long aggiornamenti = 0;
      long long ans = 0;

      for (int i = N - 1; i >= 1; i--)
      {
            int diff = A[i] - A[i - 1];

            aggiornamenti = (diff / B[i - 1]);
            ans += aggiornamenti;

            A[i - 1] += aggiornamenti * B[i - 1];

      }

      return ans;
}

// int main()
// {
//       cin.exceptions(istream::failbit);
//       ios_base::sync_with_stdio(false);
//       cin.tie(nullptr);

//       int N;
//       cin >> N;
//       vector<int> A(N);
//       for (int &i : A)
//       {
//             cin >> i;
//       }
//       vector<int> B(N - 1);
//       for (int &i : B)
//       {
//             cin >> i;
//       }

//       cout << aggiorna(N, A, B);

//       cout << endl;

//       return 0;
// }
