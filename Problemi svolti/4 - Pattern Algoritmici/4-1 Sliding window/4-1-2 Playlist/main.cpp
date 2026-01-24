// https://cses.fi/problemset/task/1141

#include <bits/stdc++.h>
using namespace std;

int main(){
      int64_t n;
      cin >> n;

      vector<int> K(n);

      for(int i=0; i<n; i++){
            cin>>K[i];
      }

      //valutare la sequenza più lunga che non prevede ripetizioni.

      //Uso la sliding window

      map<int, int> m;

      int left = 0;
      int massimo = 0;

      for(int right=0; right<n; right++){
            m[K[right]]++;

            while(m[K[right]] > 1){
                  m[K[left]]--;

                  left++;
            }

            massimo = max(massimo, right-left+1);
      }

      cout << massimo << endl;
}