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
	int c, pertama, terakhir, tengah, n, cari, array[100];
	cout << "Masukkan jumlah dari elemen : ";
	cin >> n;
	cout << "Masukkan " << n << " bilangan bulat : ";
	for ( c = 0; c < n; c++ )
	cin >> array[c];
	cout << "Masukkan nilai yang dicari : ";
	cin >> cari;
	
	// menghitung dari awal, akhir dan posisi tengah
	pertama = 0;
	terakhir = n - 1;
	tengah = (pertama+terakhir)/2;
	
	// Angka biner akan mencari elemen di tengah, jika elemen tersebut tidak ditemukan di tengah lalu akan memperpendek array hingga 2 bagian dan setiap elemen yang dicari lebih kurang seperti di tengah dan hanya mencari pada bagian lebih kecil dan jika paling besar pada bagian atas
	
	while ( pertama <= terakhir )
	{
		if ( array [tengah] == cari )
		{
			cout << cari << " ditemukan pada lokasi " << tengah + 1 << endl;
			break; // break statemen untuk menjalankan switch atau loop, dan menlanjutkan eksekusi di statement yang pertama bersebrangan dengan switch atau loop.
		}
		else if ( array [tengah] < cari )
		pertama = tengah + 1;
		else
		terakhir = tengah - 1;
		tengah = ( pertama + terakhir) / 2;
	}

if ( pertama > terakhir )
cout << "tidak ditemukan ! " << cari << " cari pada daftar.\n";
return 0; // Mengembalikan nilai 0 pada sistem operasi
}
