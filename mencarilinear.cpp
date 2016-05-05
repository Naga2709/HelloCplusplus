/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya   
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int array[100], cari, c , n;
 	
 	cout << "Masukkan jumlah dari elemen di dalam array : ";
 	cin >> n;
 	cout << "Masukkan " << n << " bilangan bulat : ";
 	
 	for ( c = 0; c < n; c++)
 	cin >> array[c];
 	
 	cout << "Masukkan jumlah yang dicari : ";
 	cin >> cari;
 	
 	// kita tetap membandingkan setiap elemen dengan elemen untuk mencari hingga tersirat elemen telah ditemukan atau akhir dari daftar
 	
 	for (c = 0; c < n; c++)
 	{
 		if (array[c] == cari) {
 			// jika dibutuhkan elemen yang ditemukan
 			cout << cari << " sudah ditemukan pada lokasi " << c+1 << "\n";
 			break; // break statemen untuk menjalankan switch atau loop, dan menlanjutkan eksekusi di statement yang pertama bersebrangan dengan switch atau loop.
		 }
	 }
	 if ( c == n)
	 cout << cari << " tidak di temukan pada array\n";
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
