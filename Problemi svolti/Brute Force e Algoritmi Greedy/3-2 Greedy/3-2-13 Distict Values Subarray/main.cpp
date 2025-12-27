// https://cses.fi/problemset/task/3420

#include <bits/stdc++.h>

using namespace std;

int main(){
      int64_t N;
      cin >> N;

      vector<int64_t> X(N);

      for(int i=0; i<N; i++){
            cin >> X[i];
      }

      int left=0;
      int64_t count=0;
      map<int64_t,int64_t> m;

      for(int right=0; right<N; right++){
            m[X[right]]++;

            while(m[X[right]] > 1){
                  m[X[left]]--;
                  left++;
            }

            count += right - left + 1;

      }

      cout << count << "\n";
}

