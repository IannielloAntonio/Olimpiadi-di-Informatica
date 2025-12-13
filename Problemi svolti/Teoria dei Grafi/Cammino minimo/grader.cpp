#include <bits/stdc++.h>
using namespace std;

using pii = pair<int64_t, int64_t>;

// Declaring functions
void mincammino(int N, int M, vector<int> X, vector<int> Y, vector<int> P, vector<int> &D){
      
      vector<vector<pii>> adj(N); //node, peso

      
      for (int i = 0; i < M; i++){
            adj[X[i]].push_back({Y[i], P[i]});
      }

      vector<int64_t> dist(N, INT64_MAX);
      vector<bool> visited(N, false);

      dist[0] = 0;

      priority_queue<pii, vector<pii>, greater<pii>> pq;

      while(!pq.empty()){
            auto [costo, node] = pq.top();

            pq.pop();

            if(visited[node]){
                  continue;
            }
            visited[node] = true;

            for(auto [to, w] : adj[node]){
            //costo == dist[node]
            if(w + costo < dist[to]){
                  dist[to] = costo + w;
            //________
            }
      } 
      }

      
}

int main() {
    ios::sync_with_stdio(false);

    // Uncomment the following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    // Reading input
    int N, M;
    cin >> N >> M;

    vector<int> X(M), Y(M), P(M), D(N);
    for (int i = 0; i < M; i++) {
        cin >> X[i] >> Y[i] >> P[i];
    }

    // Calling functions
    mincammino(N, M, move(X), move(Y), move(P), D);

    // Writing output
    for(int d : D) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
