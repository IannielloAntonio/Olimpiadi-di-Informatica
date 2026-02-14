#include <bits/stdc++.h>
using namespace std;

int main() {
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

      int N;
      cin >> N;

      vector<tuple<int64_t, int64_t, int64_t>> coordinate(N);
      for(int i=0; i<N; i++){
            cin >> get<0>(coordinate[i]) 
            >> get<1>(coordinate[i]) 
            >> get<2>(coordinate[i]);
      }

      int Q;
      cin >> Q;

      vector<int64_t> D(Q);
      for(int q=0; q<Q; q++){
            cin >> D[q];
      }

      vector<double> distanza(N);
      for(int i=0; i<N; i++){
            double dist_q = powl(get<0>(coordinate[i]), 2) + powl(get<1>(coordinate[i]), 2) + powl(get<2>(coordinate[i]), 2);
            distanza[i] = sqrtl(dist_q);
      }

      sort(distanza.begin(), distanza.end());

      int high;
      int low;
      int best;

      for(int i=0; i<Q; i++){
            high = N-1;
            low = 0;
            best = -1;

            while(low <= high){
                  int mid = (low + high)/2;

                  if(distanza[mid] > D[i]){
                        high = mid - 1;
                  }
                  else{
                        best = mid;
                        low = mid + 1;
                  }
            }

            int reach = best + 1;
            cout << reach << endl;
      }
    

      return 0;
}