#include <bits/stdc++.h>
using namespace std;

// Declaring functions
void aggiungi(long long int id);
void togli(long long int id);
int conta(long long int id);

unordered_map<long long int, int> catalogo;

// int main() {
//     ios::sync_with_stdio(false);

// Uncomment the following lines if you want to read/write from files
// ifstream cin("input.txt");
// ofstream cout("output.txt");

//     int Q;
//     cin >> Q;



//     for(int i = 0; i < Q; i++){
//         char t;
//         long long int id;
//         cin >> t >> id;

//         if(t == 'a') {
//             aggiungi(id);
//         } else if (t == 't') {
//             togli(id);
//         } else if (t == 'c') {
//             cout << conta(id) << '\n';
//         }
//     }

//     return 0;
// }

void aggiungi(long long int id){
      catalogo[id]++;
}

void togli(long long int id){
      if(catalogo[id] > 0){
            catalogo[id]--;
      }
}

int conta(long long int id){
      int occorrenze;

      occorrenze = catalogo[id];

      return occorrenze;
};
