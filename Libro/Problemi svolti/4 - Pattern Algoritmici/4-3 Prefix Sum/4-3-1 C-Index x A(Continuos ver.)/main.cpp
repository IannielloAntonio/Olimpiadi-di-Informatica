// https://atcoder.jp/contests/abc267/tasks/abc267_c

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N, M;
      cin >> N >> M;

      vector<int64_t> A(N);
      for (int i = 0; i < N; i++)
      {
            cin >> A[i];
      }

      vector<int64_t> prefix(N);
      prefix[0] = A[0];

      for (int i = 1; i < N; i++)
      {
            prefix[i] = A[i] + prefix[i-1];
      }

      vector<int64_t> w_prefix(N);
      w_prefix[0] = 0;

      for(int i=1; i<N; i++){
            w_prefix[i] = i*A[i] + w_prefix[i-1];
      }


      int left = 0;
      int64_t ans = INT64_MIN;
      int64_t current_value;

      for (int right = left + M - 1; right < N; right++)
      {
            while (right - left > M - 1)
            {
                  left++;
            }

            if (left == 0)
            {
                  current_value = w_prefix[right] + prefix[right];
            }
            else
            {
                  current_value = (w_prefix[right] - w_prefix[left-1]) - (left-1) * (prefix[right] - prefix[left-1]);
            }

            ans = max(current_value, ans);
      }

      cout << ans;

      return 0;
}
