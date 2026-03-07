#include <bits/stdc++.h>
using namespace std;

void inizia();
void apri(long long p);
void chiudi(long long p);
long long chiedi(long long p);

set strada;

int main() {
    int Q;
    cin >> Q;

    inizia();

    for (int i = 0; i < Q; i++){
        long long p;
        char t;
        cin >> t >> p;
        if (t == 'a') apri(p);
        else if (t == 'c') chiudi(p);
        else cout << chiedi(p) << endl;
    }

    return 0;
}

void inizia(){
      
}

void apri(long long p){
      strada.insert(p);
}

void chiudi(long long p){
      strada.erase(p);
}

long long chiedi(long long p){
      long long ans;
      long long a;
      long long b;
      auto it = strada.find(p);

      if(strada.upper_bound(p) != strada.end()){
            auto it_b = strada.upper_bound(p);
      }
      else{
            b = 0;
      }
      
      if(it == strada.begin()){
            a = 0;
      }
      else{
            it--;
            auto it_a = it;
      }

      if(a == 0 && b == 0){
            return ans = -1;
      }
      else if(a==0){
            return *it_b;
      }

}
