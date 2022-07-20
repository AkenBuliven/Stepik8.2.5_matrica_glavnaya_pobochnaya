# Stepik8.2.5_matrica_glavnaya_pobochnaya

Диагонали
Для заданной квадратной матрицы A[N][N] посчитать следующие величины:

произведение элементов, стоящих на главной диагонали
произведение элементов, стоящих на побочной диагонали
Входные данные:
Одно натуральное число 
N
N. Далее с новой строки 
N
N строк по 
N
N целых чисел в каждой. 
N
N не превышают десяти.

Выходные данные: 
Два целых числа, записанных через пробел. Первым вывести большее из чисел.

Sample Input:
3
1 2 3
1 4 5
2 3 -2
Sample Output:
24 -8


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    int N;
    scanf("%d", &N);
    int a[N][N];
    for (int i = 0;i < N; i++){
      for(int j = 0; j < N; j++){
        // scanf("%d", &a[i][j]); вводим массив самостоятельно
        a[i][j] = 10*(i+1)+(j+1); // вводит программа начиная с 11 12 13 14 далее 21 22 23 24 и так далее
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
