// https://training.olinfo.it/task/ois_biglietti

#include <bits/stdc++.h>
using namespace std;

int compra(int N, int M, int A, int B)
{

      int64_t costoN = 0, costoM = 0, viaggiM = 0, costoMisto = 0, contatore = 0;

      costoN = A * N;

      while(viaggiM<N){
            viaggiM = viaggiM + M;
            contatore++;
      }

      costoM = contatore*B;

      costoMisto = (N/M) * B + (N%M) * A;

      return min(costoN, min(costoM, costoMisto));
}

int main()
{
      FILE *fr, *fw;
      int N, M, A, B;

      fr = fopen("input.txt", "r");
      fw = fopen("output.txt", "w");

      assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

      fprintf(fw, "%d\n", compra(N, M, A, B));
      fclose(fr);
      fclose(fw);
      return 0;
}
