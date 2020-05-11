#include <iostream>

using namespace std;

int main() {
  int matriks1[2][2], matriks2[2][2], hasil[2][2];
  int jumlah = 0;
   cout << "Masukkan elemen matriks pertama: \n";
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        cin >> matriks1[i][j];
      }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        cin >> matriks2[i][j];
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

    cout << "Hasil perkalian matriks: \n";
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
 return 0;
  }
  
 
