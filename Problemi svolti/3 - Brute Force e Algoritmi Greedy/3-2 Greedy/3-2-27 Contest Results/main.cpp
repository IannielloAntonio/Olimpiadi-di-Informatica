// https://training.olinfo.it/task/ois_results

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N, c = 0, x = 0;
    cin >> N;

    vector<int> R(N);
    for (int i = 0; i < N; ++i)
        cin >> R[i];

    vector<int> P(N, 1);

    // INSERT YOUR CODE HERE
    bool classifica = true;
    for (int i = 1; i < N; ++i) {
        if (R[i] - R[i - 1] <= 1) {
            continue;
        } else {
            classifica = false;
            break;
        }
    }     
    if (classifica){
        for (int i = 1; i < N; i++) {
            if (R[i] != R[i - 1]) {
                P[i] = i+1;
            } else {
                P[i] = P[i-1];
            }
        }
    } else {
        for (int i = 1; i < N; i++) {
            if (R[i] != R[i - 1]) {
                P[i] = P[i - 1] + 1;
            } else {
                P[i] = P[i-1];
            }
        }
    }

    for (int i = 0; i < N; ++i)
        cout << P[i] << " ";
    cout << endl;

    return 0;
}