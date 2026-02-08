#include <bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;
      
      vector<int> a(N);
      
      for(int i=0; i<N; i++){
            cin >> a[i];
      }

      int high = N-1, low = 0;
      int mid = 0;
      int value = 10;
      int ans = -1;
      
      while(low <= high){
            mid = (high + low)/2;

            if(a[mid] == value){
                  ans = mid;
                  break;
            }

            if( a[mid] > value ){
                  high = mid - 1;
            }
            else{
                  low = mid + 1;
            }


      }

}