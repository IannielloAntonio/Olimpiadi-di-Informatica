#include <bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;

      vector<int> prezzi(N);

      for(int i=0; i<N; i++){
            cin >> prezzi[i];
      }

      int64_t ans = 0; //  Ci sarà la somma finale minima

      sort(prezzi.rbegin(), prezzi.rend());
      
      for(int i=0; i<N; i++){
            
            if( (i+1)%3 == 0){ // 
                  continue;
            }    
            else{
                  ans+=prezzi[i];
            }
            
      }

      cout << ans;

}