#include <bits/stdc++.h>
using namespace std;

int main()
{
      int N, M;

      cin >> N;
      cin >> M;

      vector<vector<int>> adj(N + 1);
      vector<bool> visited(N + 1, false);

      stack<int> s;

      for (int i = 0; i < M; i++)
      {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
      }

      



      return 0;
}