// https://cses.fi/problemset/task/1621/

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int64_t N;
      cin >> N;

      set<int> s;

      vector<int64_t> X(N);
      for (int i = 0; i < N; i++)
      {
            cin >> X[i];
            s.insert(X[i]);
      }


      cout << s.size() << endl;
}