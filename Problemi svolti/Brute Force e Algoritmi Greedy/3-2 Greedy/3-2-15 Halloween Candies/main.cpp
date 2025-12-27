// https://training.olinfo.it/task/ois_candies

#include <bits/stdc++.h>

using namespace std;

int main()
{
      int N;
      cin >> N;

      vector<int> K(N);
      for (int i = 0; i < N; i++)
      {
            cin >> K[i];
      }

      int64_t candies = 1;
      int64_t ans = 1;

      sort(K.begin(), K.end());

      for (int i = 1; i < N; i++)
      {
            if (K[i] > K[i - 1])
                  candies++;
                  ans += candies;
      }

      cout << ans << endl;
}