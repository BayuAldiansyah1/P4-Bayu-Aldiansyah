#include <stdio.h>
int main(){
  int m, n, matriks[10][10], transpose[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf ("%d",&m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf ("%d",&n);

  printf("Masukkan elemen matriks\n");
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      scanf ("%d",matriks[i][j]);
    }
  }

  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

  printf("Hasil Transpose Matriks: \n");
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
    printf("%d\t",transpose[i][j] );
    }
    printf("\n");
  }
}
