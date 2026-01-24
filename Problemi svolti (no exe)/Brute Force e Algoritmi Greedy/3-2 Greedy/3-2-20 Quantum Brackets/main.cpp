// https://training.olinfo.it/task/ois_brackets

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int T;
      cin >> T;

      for (int t = 0; t < T; t++)
      {

            int N, b;
            cin >> N >> b;

            vector<int64_t> P(N);
            for(int i=0; i<N; i++){
                  cin >> P[i];
            }

            stack<int64_t> temp;

            temp.push(P[0]);

            for(int i=1; i<N; i++){
                  if(!temp.empty()  && P[i] == temp.top()){
                        temp.pop();
                  }
                  else{
                        temp.push(P[i]);
                  }
            }

            if(temp.empty()){
                  cout << 1 << endl;
            }
            else{
                  cout << 0 << endl;
            }

      }
}