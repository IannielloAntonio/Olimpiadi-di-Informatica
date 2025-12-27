int main() {
    cin.exceptions(istream::failbit);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int& i : A) {
        cin >> i;
    }
    vector<int> B(N - 1);
    for (int& i : B) {
        cin >> i;
    }

    cout << aggiorna(N, A, B);

    cout << endl;

    return 0;
}
