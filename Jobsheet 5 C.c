#include <stdio.h>
int main() {
  int matriks1[2][2], matriks2[2][2], hasil[2][2];
  int jumlah = 0;
   printf("Masukkan elemen matriks pertama: \n");
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        scanf("%d",&matriks1[i][j]);
      }
    }
	printf("Masukkan elemen matriks kedua: \n");
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        scanf("%d",&matriks2[i][j]);
      }
    }

    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        for(int k = 0; k < 2; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    printf("Hasil perkalian matriks: \n");
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        printf("%d\t",hasil[i][j]);
      }
      printf("\n");
      }
 return 0;
  }
  
 
