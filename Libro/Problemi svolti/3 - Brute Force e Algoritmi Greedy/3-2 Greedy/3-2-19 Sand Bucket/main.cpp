// https://training.olinfo.it/task/ois_buckets

#include <bits/stdc++.h>
using namespace std;

int main(){
      int64_t N;
      cin >> N;
      bool flag = true;

      multiset<int64_t> ms;
      for(int i=0; i<N; i++){
            int64_t bucket;
            cin >> bucket;
            ms.insert(bucket);
      }

      auto it = ms.begin();
      auto prev_it = it;

      for(; it!=ms.end(); ++it){
            if(*it > *prev_it){
                  prev_it = it;
                  continue;
            }
            else if(*it <= *prev_it && it != prev_it){
                  flag = false;
                  break;
            }
      }

      if(flag){
            cout << "Ok" << endl;
      }
      else{
            cout << "Impossible" << endl;
      }
}