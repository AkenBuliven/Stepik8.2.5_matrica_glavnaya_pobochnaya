#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    int N;
    scanf("%d", &N);
    int a[N][N];
    for (int i = 0;i < N; i++){
      for(int j = 0; j < N; j++){
        // scanf("%d", &a[i][j]);
        a[i][j] = 10*(i+1)+(j+1);
      }
    }
    printf("\n");

    for (int i = 0; i < N; i++){
      for(int j = 0; j < N ; j++){
        printf("%d ", a[i][j]);
      }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < N; i++){
      for(int j = 0; j < N ; j++){
      }
      printf("%d ", a[i][i]);
    }
    
    printf("\n");
  
    for (int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
      }
      printf("%d ", a[i][N - 1 - i]);
    }
    
    printf("\n");

  int spob = 1;
    for (int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
      }
      spob *= a[i][N-i-1];
    }
    printf("%d ", spob);

    int sglav = 1;
    for (int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
      }
      sglav = sglav * a[i][i];
    }
    printf("%d ", sglav);
  
    return 0;
}