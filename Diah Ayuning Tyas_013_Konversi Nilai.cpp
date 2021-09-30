#include <iostream>
using namespace std;

int main() {
	int nilai;
	char Next;
	cout<<"PROGRAM KONVERSI NILAI KE HURUF"<<endl;
	do{
	
	cout<<"Masukkan Nilai = ";
	cin>>nilai;
	
	if(nilai>=80 && nilai>=100){
		cout<<"A";}
	else if(nilai>=65){
		cout<<"B";}
	else if(nilai>=50){
		cout<<"C";}	
	else if(nilai>=35){
		cout<<"D";}	
	else{
		cout<<"E";}
    cout<<" "<<endl;
	cout<<"Next ? [Y/N] : "; cin>>Next;
    cout<<endl;}
    while (Next == 'y' || Next == 'Y');
    cout<<"Terimakasih @diah ayuning tyas"<<endl;
    cout<<" "<<endl;
   
	return 0;
}
