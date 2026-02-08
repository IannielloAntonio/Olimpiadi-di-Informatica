#include <bits/stdc++.h>
using namespace std;

int main() {
      int N, target;
      cin >> N >> target;


      vector<int> A(N);
      for(int i=0; i<N; i++){
            cin >> A[i];
      }

      sort(A.begin(), A.end());

      int ans = -1;

      int high = N-1;
      int low = 0;

      while(low <= high){
            int mid = (low + high)/2;

            if(A[mid] == target ){
                  ans = mid;
                  break;
            }
            else if(A[mid] > target ){
                  high = mid - 1;
            }
            else{
                  low = mid + 1;
            }
      }

      

      return 0;
}