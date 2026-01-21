#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N, M;
      cin >> N >> M;

      vector<int> A(N);
      for (int i = 0; i < N; i++)
      {
            cin >> A[i];
      }

      vector<int64_t> prefix(N);
      vector<int64_t> w_prefix(N);

      prefix[0] = A[0];

      for (int i = 1; i < N; i++)
      {
            prefix[i] = A[i] + prefix[i - 1];
      }

      w_prefix[0] = A[0] * 0;
      for (int i = 1; i < N; i++)
      {
            w_prefix[i] = i * A[i] + w_prefix[i - 1];
      }

      int left = 0;
      int64_t ans = INT64_MIN;
      int64_t current_ans;

      for (int right = M - 1; right < N; right++)
      {
            int left = right - M + 1;

            int64_t current_ans;
            if (left == 0)
            {
                  current_ans = w_prefix[right] + prefix[right];
            }
            else
            {
                  current_ans =
                      (w_prefix[right] - w_prefix[left - 1]) - (left - 1) * (prefix[right] - prefix[left - 1]);
            }

            ans = max(ans, current_ans);
      }

      cout << ans << endl;
}