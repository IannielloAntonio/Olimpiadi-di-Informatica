#include <bits/stdc++.h>
using namespace std;

int main(){
      int64_t N;
      cin >> N;

      int C;
      cin >> C;

      vector<int> L(N);

      for(int i=0; i<N; i++){
            cin >> L[i];
      }

      //Sliding window
      vector<int> count(C, 0);
      int left = 0;
      int totale_corrente = 0;
      int dist = INT_MAX;

      for(int right = 0; right<N; right++){

            count[L[right]]++;

            if(count[L[right]] == 1){
                  totale_corrente++;
            }

            while(totale_corrente == C){
                  dist = min(dist, right-left+1);

                  count[L[left]]--;

                  if(count[L[left]] == 0){
                        totale_corrente--;
                  }

                  left++;
            }



      }

}