#include<iostream>
using namespace std;

int main(){
	cout<<"---------Biodata Siswa---------"<<"\n";
	cout<<"==============================="<<"\n";
	
	string nama, tanggallahir, alamat, jurusan;
	
	cout<<"Masukkan Nama Anda           : ";
	getline(cin,nama);
	cout<<"Masukkan Tanggal Lahir Anda  : ";
	getline(cin,tanggallahir);
	cout<<"Masukkan Alamat Anda         : ";
	getline(cin, alamat);
	cout<<"Masukkan Jurusan Anda        : ";
	getline(cin, jurusan);
	cout<<"\n\n";
	
	cout<<"-----------Data Siswa----------"<<"\n";
	cout<<"==============================="<<"\n";
	
	cout<<"Nama             : "<<nama<<"\n";
	cout<<"Tanggal lahir    : "<<tanggallahir<<"\n";
	cout<<"Alamat           : "<<alamat<<"\n";
	cout<<"Jurusan          : "<<jurusan<<"\n";
	
	return 0;
}
