// https://training.olinfo.it/task/ois_swimmingpool

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N;
      cin >> N;

      vector<int64_t> D(N);
      for (int i = 0; i < N; i++)
      {
            cin >> D[i];
      }

      sort(D.begin(), D.end());

      int64_t ans = INT64_MAX;

      for(int i=0; i<N; i++){
            int64_t dist = max(D[i] - D[0], D[N-1] - D[i]);

            ans = min(ans, dist);
      }

      
      cout << ans << endl;
}