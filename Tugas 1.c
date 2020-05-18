#include <stdio.h>
#include <stdlib.h>
int array[16]={3,5,12,19,28,44,59,85,170,240,296,408,568,875,2010,4830};
	int array1[16]={1500,2000,5000,5500,10000,12000,20000,30000,60000,65000,100000,104500,150000,300000,500000,1145000};
	char nama[30];
	char nim[9];
	int id,saldo = 200000;
int menu(){
	
menu:
	system("cls");
    int pilih,x,sisa,harga,hasil,total;
	int lagi;
	printf("Pilih nominal top up\n");
	printf("=======================================\n");
	printf("Saldo anda sebesar = %d\n",saldo);
	printf("=======================================\n");
	printf("\n|-------|------------------------|----------------|\n");
	printf("|  kode |\t Jumlah diamond\t |\tHarga(Rp.)|\n");
		for (int y=0;y<16;y++){
			printf("|   %i",y+1);
			printf("\t|\t%d",array[y]);
			printf("\tDiamond  |\t%d",array1[y]);
			printf("\t  |");
			printf("\n");
		}
	printf("===================================================\n");
		printf("Pilih\n");
		scanf("%d",&pilih);
		switch (pilih){
			case 1:
				printf("%d diamond,Rp %d\n",array[0],array1[0]);
				break;	
			case 2:
				printf("%d diamond,Rp %d\n",array[1],array1[1]);
				break;	
			case 3:
				printf("%d diamond,Rp %d\n",array[2],array1[2]);
				break;	
			case 4:
				printf("%d diamond,Rp %d\n",array[3],array1[3]);
				break;	
			case 5:
				printf("%d diamond,Rp %d\n",array[4],array1[4]);
				break;	
			case 6:
				printf("%d diamond,Rp %d\n",array[5],array1[5]);
				break;	
			case 7:
				printf("%d diamond,Rp %d\n",array[6],array1[6]);
				break;	
			case 8:
				printf("%d diamond,Rp %d\n",array[7],array1[7]);
				break;	
			case 9:
				printf("%d diamond,Rp %d\n",array[8],array1[8]);
				break;	
			case 10:
				printf("%d diamond,Rp %d\n",array[9],array1[9]);
				break;	
			case 11:
				printf("%d diamond,Rp %d\n",array[10],array1[10]);
				break;	
			case 12:
				printf("%d diamond,Rp %d\n",array[11],array1[11]);
				break;	
			case 13:
				printf("%d diamond,Rp %d\n",array[12],array1[12]);
				break;	
			case 14:
				printf("%d diamond,Rp %d\n",array[13],array1[13]);
				break;	
			case 15:
				printf("%d diamond,Rp %d\n",array[14],array1[14]);
				break;	
			case 16:
				printf("%d diamond,Rp %d\n",array[15],array1[15]);
				break;	
			default :
			goto akhir;
				}
				harga=hasil+array1[pilih-1];
				hasil=array1[pilih-1];
				printf("=======================================\n");
				printf("1. Transaksi lagi\n2. Cetak struk pembayaran\n");
				scanf("%d",&lagi);
				switch (lagi){
					case 1 :
						total=array1[pilih-1]+harga;
				        goto menu;
				        break;
				    case 2 :
				    	goto akhir;
						break;
				}
 akhir:
	    sisa=saldo-harga;
	    printf("=========================================\n");
		printf("|Struk pembayaran\t\t\t|\n");
		printf("|Total pembelian diamond harga =%d\t|\n",harga);
		printf("|Sisa saldo anda               =%i\t|\n",sisa);
		printf("|Atas nama                     =%s\t|\n",nama);
		printf("|Id Mobile Legend              =%d\t|\n",id);
		printf("=========================================\n");
}

int main(){
	system("cls");
	printf("=======================================\n");
	printf("|| CODASHOP                          ||\n");
	printf("||          APLIKASI TOP UP          ||\n");
	printf("||          MOBILE LEGEND            ||\n");
	printf("||            BANG BANG              ||\n");
	printf("=======================================\n");
	ulang :
	printf("Masukkan nama anda = ");
	scanf("%s",&nama);
	printf("Masukkan NIM anda  = ");
	scanf("%s",&nim);
	printf("Masukkan id anda   = ");
	scanf("%d",&id);
	menu();
if(nama != "Bayu" && nim != "F1B019035"){
	system("cls");			
	menu();
	}
else {
	system("cls");
	goto ulang;
	}
	}
