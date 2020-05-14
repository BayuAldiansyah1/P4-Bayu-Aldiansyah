#include <iostream>
using namespace std;
int array[16]={3,5,12,19,28,44,59,85,170,240,296,408,568,875,2010,4830};
int array1[16]={1500,2000,5000,5500,10000,12000,20000,30000,60000,65000,100000,104500,150000,300000,500000,1145000};
char nama[30];
char nim[9];
int id,saldo = 200000;
int menu(){
menu:
system("cls");
int pilih,x,sisa,harga,hasil,total;
char lagi;
cout<<"Pilih nominal top up\n";
cout<<"=======================================\n";
cout<<"Saldo anda sebesar = "<<saldo<<endl;
cout<<"=======================================\n";
cout << "\n|-------|------------------------|----------------|\n";
cout << "|  kode |\t Jumlah diamond\t |\tHarga(Rp.)|\n";
for (int y=0;y<16;y++){
cout<<"|   "<<y+1<<"\t|\t"<<array[y]<<"\tdiamond"<<"  |\t"<<array1[y]<<"\t  |"<<endl;
}
cout<<"===================================================\n";
cout<<"Pilih : ";
cin>>pilih;
switch (pilih){
case 1:
cout<<array[0]<<" diamond,Rp"<<array1[0]<<endl;
break;
case 2:
cout<<array[1]<<" diamond,Rp"<<array1[1]<<endl;
break;
case 3:
cout<<array[2]<<" diamond,Rp"<<array1[2]<<endl;
break;
case 4:
cout<<array[3]<<" diamond,Rp"<<array1[3]<<endl;
break;
case 5:
cout<<array[4]<<" diamond,Rp"<<array1[4]<<endl;
break;
case 6:
cout<<array[5]<<" diamond,Rp"<<array1[5]<<endl;
break;
case 7:
cout<<array[6]<<" diamond,Rp"<<array1[6]<<endl;
break;
case 8:
cout<<array[7]<<" diamond,Rp"<<array1[7]<<endl;
break;
case 9:
cout<<array[8]<<" diamond,Rp"<<array1[8]<<endl;
break;
case 10:
cout<<array[9]<<" diamond,Rp"<<array1[9]<<endl;
break;
case 11:
cout<<array[10]<<" diamond,Rp"<<array1[10]<<endl;
break;
case 12:
cout<<array[11]<<" diamond,Rp"<<array1[11]<<endl;
break;
case 13:
cout<<array[12]<<" diamond,Rp"<<array1[12]<<endl;
break;
case 14:
cout<<array[13]<<" diamond,Rp"<<array1[13]<<endl;
break;
case 15:
cout<<array[14]<<" diamond,Rp"<<array1[14]<<endl;
break;
case 16:
cout<<array[15]<<" diamond,Rp"<<array1[15]<<endl;
break;
}
harga=hasil+array1[pilih-1];
hasil=array1[pilih-1];
cout<<"\nApakah Anda ingin melanjutkantransaksi?(y/n)"<<endl;
cin>>lagi;
if(lagi=='y'||lagi=='Y'){
total=array1[pilih-1]+harga;
goto menu;
}
else if (lagi!='y'||lagi!='Y'){
goto akhir;
 }
 akhir:
sisa=saldo-harga;
cout<<"========================================="<<endl;
cout<<"|Struk pembayaran\t\t\t|"<<endl;
cout<<"|Total pembelian diamond harga ="<<harga<<"\t|"<<endl;
cout<<"|Sisa saldo anda               ="<<sisa<<"\t|"<<endl;
cout<<"|Atas nama                     ="<<nama<<"\t|"<<endl;
cout<<"|Id Mobile Legend              ="<<id<<"\t|"<<endl;
cout<<"========================================="<<endl;
}
int main(){
system("cls");
cout<<"=======================================\n";
cout<<"|| CODASHOP                          ||\n";
cout<<"||       APLIKASI TOP UP             ||\n";
cout<<"||               MOBILE LEGEND       ||\n";
cout<<"||                       BANG BANG   ||\n";
cout<<"=======================================\n";
ulang :
cout<<"Masukkan nama anda = ";
cin>>nama;
cout<<"Masukkan NIM anda  = ";
cin>>nim;
cout<<"Masukkan id anda   = ";
cin>>id;
if(nama != "Bayu" && nim != "F1B019035"){
	system("cls");			
	menu();
	}
else {
	system("cls");
	goto ulang;
	}
}
