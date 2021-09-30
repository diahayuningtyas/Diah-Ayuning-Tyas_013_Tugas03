#include <iostream>
using namespace std;

int main() {
	
	string Nama_Karyawan,NIK;
	int Jenis_kelamin,Status_pernikahan,Kendaraan,Gaji_pokok,Uang_makan,Gaji_kotor,Gaji_bersih,Pajak,Tunjangan,Transport;
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN";
	cout<<endl;
	
	cout<<"Masukkan nama = ";
	getline(cin,Nama_Karyawan);
	cout<<"Masukkan no NIK = ";
	cin>>NIK;
	
	cout<<endl;
	cout<<"Masukkan jenis kelamin anda (1 = laki=laki dan 0 = perempuan)	= ";
	cin>>Jenis_kelamin;
	cout<<"Masukkan status pernikahan (1 = menikah dan 0 = single)		= ";
	cin>>Status_pernikahan;
	cout<<"Masukkan jenis kendaraan (1 = mobil dan 0 = motor)		= ";
	cin>>Kendaraan;
	
	cout<<endl;
	cout<<"Besar gaji pokok	= Rp.";
	cin>>Gaji_pokok;
	cout<<"Besar uang makan	= Rp.";
	cin>>Uang_makan;
	
	//Tunjangan
	if (Jenis_kelamin==1 && Status_pernikahan==1){
		Tunjangan	= 500;
	}else{
	}
	cout<<"Besar uang tunjangan = Rp."<<Tunjangan;
	cout<<endl;

	//Transport
	if(Kendaraan==1){
		Transport	= 1000;
	}else if(Kendaraan==0){
		Transport	=500;
	}else{
	}
	cout<<"Besar uang transport = Rp."<<Transport;
	cout<<endl;
	
	//gaji kotor
	Gaji_kotor=Gaji_pokok+Uang_makan+Tunjangan+Transport;
	cout<<"Gaji kotor = Rp."<<Gaji_kotor;
	cout<<endl;
	
	//pajok
	Pajak=0.05*Gaji_kotor;
	cout<<"Pajak = Rp."<<Pajak;
	cout<<endl;
	
	//gaji bersih
	Gaji_bersih=Gaji_kotor-Pajak;
	cout<<"Total Gaji Bersih = Rp."<<Gaji_bersih<<endl;
	cout<<"Terimakasih @diah ayuning tyas"<<endl;
	
	return 0;
}
