#include <iostream>
using namespace std;

int main() {
	int tahun;
	char Next;
	cout<<"PROGRAM PERHITUNGAN TAHUN KABISAT"<<endl;
	do{
	
	cout<<"Masukkan Tahun = ";
	cin>>tahun;
	
	cout<<"Hasil Perhitungan = ";
	if(tahun%4==0){
		cout<<"Tahun Kabisat";

	}else{
	
		cout<<"Bukan Tahun Kabisat"<<endl;
    }
    cout<<" "<<endl;
	cout<<"Next ? [Y/N] : "; cin>>Next;
    cout<<endl;}
    while (Next == 'y' || Next == 'Y');
    cout<<"Terimakasih @diah ayuning tyas"<<endl;
    cout<<" "<<endl;
   
	return 0;
}
