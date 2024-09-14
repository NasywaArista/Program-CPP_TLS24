#include <iostream>
#include <cmath>

 using namespace std;

 int main () {
 	float harga, diskon; //deklarasi variabel harga awal dan diskon

 	
 	cout << "Hitung harga barangmu setelah terkena diskon\n";
 	cout << "Masukkan harga awal (tanpa titik): "; //harga ditulis tanpa titik
 	 cin >> harga;
 	cout << "Oke!\n";
 	cout << "Masukkan diskon dlm persen (tanpa %): "; //diskon tanpa persen
 	 cin >> diskon;
 	 
 	//rumus mencari besar diskon
 	float besar_diskon = diskon / 100 * harga;
 	//rumus mencari harga akhir setelah diskon
 	float harga_akhir = harga - besar_diskon;
 	
 	//menampilkan harga diskon dan harga akhir
 	cout << "Besar diskonmu:\n " << besar_diskon << endl;
 	cout << "Harga barang setelah diskon:\n " << harga_akhir << endl;
	cout << "Terima kasih, selamat berbelanja!" << endl; 
 	
	return 0;		
 	 		
}
  
