#include <iostream>
using namespace std;
int main (){
	int bilangan [6][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
   	cout<<"Nama=Bayu\nNIM=5"<<endl;
   	cout<<"Nama=Heru\nNIM=6"<<endl;
   	for (int i=0;i<6;i++){
   		for(int j=0;j<5;j++){
   			   			cout<<"isi array ke "<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<bilangan[i][j]<<endl;
		   }
	   }
	}
