#include <iostream>
using namespace std;
int main() 
{int bilangan1,bilangan2,pilihan;
	string operasi;
	char Next;
	float hasil;
	do{
	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;
	cout<<"Masukan Pilihan : ";
	cin>>pilihan;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bilangan1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bilangan2;	
	
	switch(pilihan){
	        case 1 : hasil=bilangan1+bilangan2;
			operasi="+";
			break;
		case 2 : hasil=bilangan1-bilangan2;
			operasi="-";
			break;
		case 3 : hasil=bilangan1*bilangan2;
			operasi="*";
			break;
		case 4 : hasil=bilangan1/bilangan2;
			operasi="/";
			break;
		case 5 : hasil=bilangan1%bilangan2;
			 operasi="%";
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	
	}
	cout<<"******************************"<<endl;
	cout<<"    "<<bilangan1<<operasi<<bilangan2<<"="<<hasil<<endl;
	cout<<"******************************"<<endl;
	cout<<"Next ? [Y/N] : "; cin>>Next;
    cout<<endl;}
	while (Next == 'y' || Next == 'Y');
	cout<<"Terimakasih @diah ayuning tyas"<<endl;
	return 0;
}
