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
 	int a[10], i, n, m, c, l, u;
 	cout << " Masukkan ukuran dari sebuah array : ";
 	cin >> n;
 	cout << " Masukkan elemen dari array : ";
 	for ( i=0; i<n; i++ )
 	cin >> a[i];
 	
 	cout << " Masukkan angka yang ingin dicari : ";
 	cin >> m;
 	
 	l=0, u=n-1;
 	c=angka_biner (a,n,m,l,u);
 	if ( c==0 )
 	cout << " Angka tidak ditemukan. ";
 	else
 	cout << " Angka ditemukan.";
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
 
 // Angka biner akan mencari elemen ditengah, jika elemen tidak ada dan jika elemen yang dicari lebih kecil dari yang ditengah daripada yang akan dicari hanya dibagian bawah dan jika lebih besar dari bagian yang diatas
 
 int angka_biner (int a[], int n, int m, int l, int u)
 {
 	int tengah, c = 0;
 	if (l  < u) {
 		tengah = (l + u) / 2;
 		if ( m == a[tengah]) {
 			c = 1;
		 }
		 else if ( m<a[tengah]) {
		 	return angka_biner (a,n,m,l,tengah-1);
		 	}
			 else
		 	return angka_biner (a,n,m,tengah+1,u);
		 }
		 else
		 return c;
	 }
