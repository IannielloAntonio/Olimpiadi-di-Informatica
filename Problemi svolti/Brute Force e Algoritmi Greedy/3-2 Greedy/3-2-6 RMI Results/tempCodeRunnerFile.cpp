for (int i = 0; i < N; i++)
      {
            if(indexF>N || indexS<0){
                  break;
            }

            if (S[indexS] + F[indexF] > somma_punteggio_mio)
            {
                  Y++;
                  indexS--;
                  indexF++;
            }
            else
            {
                  indexF++;
            }

              
      }
