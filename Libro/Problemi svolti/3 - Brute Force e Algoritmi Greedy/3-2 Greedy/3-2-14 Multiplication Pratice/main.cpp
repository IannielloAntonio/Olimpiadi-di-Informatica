//https://training.olinfo.it/task/ois_multiplication

#include <bits/stdc++.h>

using namespace std;

int main()
{
      int N;
      cin >> N;

      vector<int> K(N);
      vector<int> ans;

      for (int i = 0; i < N; i++)
      {
            cin >> K[i];
      }

      for (int i = 0; i < N; i++)
      {
            int fattore = 2;
            int digits = 10;
            string s = to_string(K[i]);
            vector<bool> flag(digits, false);

            for (char c : s)
            {
                  int number = c - '0';
                  flag[number] = true;
            }

            while (!flag[0] ||
                   !flag[1] ||
                   !flag[2] ||
                   !flag[3] ||
                   !flag[4] ||
                   !flag[5] ||
                   !flag[6] ||
                   !flag[7] ||
                   !flag[8] ||
                   !flag[9])
            {

                  int moltiplicazione = K[i] * fattore;

                  string s2 = to_string(moltiplicazione);

                  for (char c : s2)
                  {
                        int number = c - '0';
                        flag[number] = true;
                  }

                  fattore++;
            }

            ans.push_back(--fattore);
      }

      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << endl;
      }
}
