// https://training.olinfo.it/task/ois_gatherings

#include <bits/stdc++.h>
using namespace std;

int main() {

      int N;
      cin >> N;

      int D;
      cin >> D;

      vector<int> P(N); 
      for(int i=0; i<N; i++){
            cin >> P[i];
      }

      int64_t coppie = 0;

      for(int i=0; i<N; i++){
            int low = i + 1;
            int high = N - 1;
            int mid;
            int64_t best = i;
            
            

            while(low <= high){
                  mid = (low + high)/2;

                  if( P[mid] - P[i] >= D ){
                        high = mid - 1;
                  }
                  else if( P[mid] - P[i] < D ){
                        best = mid;
                        low = mid + 1;
                  }
            }

            coppie += best - i;

      }

      cout << coppie << endl;




      return 0;
}